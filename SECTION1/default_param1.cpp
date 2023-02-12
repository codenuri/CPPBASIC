#include <iostream>

void foo(int a, int b = 0, int c = 0)
{
	std::cout << a << ", " << b << ", " << c << std::endl;
}

int main()
{
	foo(1, 2, 3);
	foo(1, 2);   // foo(1, 2, 0)
	foo(1);      // foo(1, 0, 0)
}