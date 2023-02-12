#include <iostream>

void f1(std::ostream& os)
{
	os << "hello\n";
}

void f2(const std::ostream& os)
{
//	os << "hello\n"; // os.operator<<(...);
}

int main()
{
	f1(std::cout);
	f2(std::cout);
}
