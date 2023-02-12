#include <iostream>

int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}

int main()
{
	auto ret1 = square(3);
	auto ret2 = square(3.4);

	std::cout << ret1 << std::endl;
	std::cout << ret2 << std::endl;
}