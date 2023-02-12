#include <print>
#include <functional> // C++ 표준에 많은 함수 객체 제공된다.

int main()
{
	std::plus<int>    f1;
	std::minus<int>   f2;
	std::modulus<int> f3; // %

	std::println("{}", f1(10, 3)); // 13
	std::println("{}", f2(10, 3)); // 7
	std::println("{}", f3(10, 3)); // 10 % 3 => 1
}