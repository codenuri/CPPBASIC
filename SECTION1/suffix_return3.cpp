#include <iostream>

template<class T1, class T2>
//decltype(a + b) add(T1 a, T2 b)
//auto add(T1 a, T2 b) -> decltype(a + b)   // C++11 
auto add(T1 a, T2 b)    // C++14 부터 지원
{
	return a + b;
}

int main()
{
	std::cout << add(1, 2.1) << std::endl; // ok
}
