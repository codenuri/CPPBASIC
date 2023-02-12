#include <print>

void f1() noexcept { }
void f2(int a, int b) noexcept { }
void f3(int a, int b) { throw 1; }

int main()
{
	bool b1 = noexcept( f1() );
	bool b2 = noexcept( f2(1, 2) );
	bool b3 = noexcept( f3(1, 2) );

	std::println("{}", b1);
	std::println("{}", b2);
	std::println("{}", b3);
}