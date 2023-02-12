#include <print>
#include <algorithm>
#include <vector>
#include <list>
#include <ranges>

int main()
{
	std::list s = {1, 2, 3, 4, 5};
			
	auto ret1 = std::ranges::find(s, 3);

	if ( ret1 == s.end()) {}


	auto iv = std::views::take(s, 2);

	auto ret2 = std::ranges::find(iv, 3);


	if (ret2 == iv.end() )
		std::println("fail");
	else 
		std::println("success : {}", *ret2);
}
