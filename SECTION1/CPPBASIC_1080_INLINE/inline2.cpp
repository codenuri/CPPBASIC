// inline2.cpp
#include <cstdio>

inline int sub(int a, int b)
{
	return a - b;
}

void f2()
{
	sub(1, 2);

	printf("f2   : %p\n", &sub);
}