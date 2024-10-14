// gvar.cpp
#include <cstdio>
#include "gvar.h"

int x = 0;

void f1()
{
	printf("f1   : %p\n", &x);
	printf("f1   y : %p\n", &y);
}