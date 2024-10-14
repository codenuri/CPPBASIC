#include <cstdio>
#include "linkage3.h"

void f1();

int main()
{
	printf("main s : %p\n", &s);
	printf("main x : %p\n", &x);
	printf("main y : %p\n", &y);
	f1();
}

