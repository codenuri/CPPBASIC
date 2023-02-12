#include <print>

void f1() noexcept {}

void f2(int a) noexcept {}
void f2(double a) {}

template<typename T>
void foo(T arg) noexcept( noexcept(f2(arg)) )
{
	f1();
	f2(arg);
}

int main()
{
	std::println("{}", noexcept(foo(3)));
	std::println("{}", noexcept(foo(3.4)));
}

