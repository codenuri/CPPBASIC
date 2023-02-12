#include <print>
#include <bitset>
#include <string>

int main()
{
	std::bitset<10> bs;

	bs.set(5); 	// 5번째 비트만 1로
	bs.set();  	// 모든 비트를 1로
	bs.reset(3);// 3번째 비트만 0으로

	std::println("{}", bs.test(3)); // false
	std::println("{}", bs.test(5)); // true

	std::println("{}", bs.to_string());
}