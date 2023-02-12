#include <print>
#include <vector>
#include <ranges>

int main()
{
	std::vector v = {1,2,3,4,5};

//	for( auto e : v)
	for( auto e : std::views::take(v, 3) )
	{
		std::println("{}", e);
	}
}
