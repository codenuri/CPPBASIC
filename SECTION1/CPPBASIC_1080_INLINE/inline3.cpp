// inline3.cpp
#include <cstdio>

void f1();
void f2();

inline int sub(int a, int b)
{
	return a - b;
}

int main()
{
	sub(1, 2);
	printf("main : %p\n", &sub);
	f1();
	f2();
}