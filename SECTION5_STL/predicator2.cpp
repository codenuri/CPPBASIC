#include <print>
#include <algorithm>
#include <list>

int main()
{
	std::list s = {1, 9, 5, 7, 3, 8, 10};

	// s 에서 첫 번째 나오는 "3의 배수"를 찾고 싶다.
	auto ret1 = std::find_if(s.begin(), s.end(), 
									   [](int n) { return n % 3 == 0;});

	int k = 0;
	std::cin >> k;

	// s 에서 첫 번째 나오는 "k의 배수"를 찾고 싶다.
	auto ret2 = std::find_if(s.begin(), s.end(), 
									   [k](int n) { return n % k == 0;});

}
