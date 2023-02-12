#include <print>
#include <algorithm>
#include <list>

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::list s = {1, 9, 5, 7, 3, 8, 10};

	// s 에서 첫 번째 나오는 3을 찾고 싶다.
	auto ret1 = std::find(s.begin(), s.end(), 3);


	// s 에서 첫 번째 나오는 "3의 배수"를 찾고 싶다.
//	auto ret2 = std::find_if(s.begin(), s.end(), foo );

	auto ret2 = std::find_if(s.begin(), s.end(), [](int n) { return n % 3 == 0;} );

	std::println("{}", *ret2);
}
