#include <print>
#include <algorithm>
#include <vector>
#include <list>

int main()
{
	std::list s = {1, 2, 3, 4, 5};
			
	auto ret1 = std::find(s.begin(), s.end(), 3);

	if ( ret1 == s.end() ) {}  // 실패.!

	
	auto first = s.begin();
//	auto last  = first + 3; // vector 반복자는 가능, list 반복자는 안됨.
	auto last  = std::next(first, 3);	// 4를 가리킴.

//	auto ret2 = std::find(first, last, 3);
	auto ret2 = std::find(first, last, 4);

	if (ret2 == last )
	{
		std::println("fail");
	}
	else 
	{
		std::println("success : {}", *ret2);
	}
}
