#include <iostream>

std::ostream& tab(std::ostream& os)
{
	os << '\t';
	return os;
}

std::ostream& menu(std::ostream& os)
{
	os << "1. AAA\n";
	os << "2. BBB\n";
	return os;
}

int main()
{
	std::cout << menu;
}