#include <cstdio>
#include "linkage3.h"

void f1()
{
	printf("f1   s : %p\n", &s);
	printf("f1   x : %p\n", &x);
	printf("f1   y : %p\n", &y);
}

