#include <cstdio> // <stdio.h>
#include <iostream>

int main()
{
	int    n = 10;
	double d = 3.4;

	printf("%d, %f\n", n, d);

	std::cout << n << ", " << d << std::endl;

	scanf("%d", &n);
	std::cin >> n;
}