// inline1.cpp
#include <cstdio>

inline int sub(int a, int b)
{
	return a - b;
}

void f1()
{
	sub(1, 2);

	printf("f1   : %p\n", &sub);
}