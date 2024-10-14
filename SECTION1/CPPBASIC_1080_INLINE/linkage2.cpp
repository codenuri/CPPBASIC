#include <cstdio>
#include "linkage2.h"

void f1()
{
	printf("f1   goo : %p\n", &goo);
	printf("f1   hoo : %p\n", &hoo);
	printf("f1   joo : %p\n", &joo);
}

