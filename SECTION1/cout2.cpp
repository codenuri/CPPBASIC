#include <iostream>
#include <iomanip>

int main()
{
	int n = 10;

	std::cout << n << std::endl;

	// "%x"
	std::cout << std::hex << n << std::endl;

	// "%d"
	std::cout << std::dec << n << std::endl;

	// "%10d"
	std::cout << std::setw(10) << n << std::endl;
	std::cout << std::setw(10) << std::setfill('#') << n << std::endl;

	std::cout << std::setw(10) << std::setfill('#') << std::left << n << std::endl;
}
