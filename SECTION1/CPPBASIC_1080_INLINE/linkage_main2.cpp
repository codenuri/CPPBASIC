#include <cstdio>
#include "linkage2.h"

void f1();

int main()
{
	printf("main goo : %p\n", &goo);
	printf("main hoo : %p\n", &hoo);
	printf("main joo : %p\n", &joo);
	f1();
}

