// inline_variable1.cpp
#include <cstdio>
#include "gvar.h"

void f1();

int main()
{
	printf("main : %p\n", &x);
	printf("main y : %p\n", &y);
	f1();
}