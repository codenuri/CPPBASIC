#include <iostream>
#include <ranges>

bool is_odd_number(int n) { return n % 2 == 1; }

int main()
{
	int x[10] = {1,2,3,4,5,6,7,8,9,10};

//	for ( auto e : x)
//	for ( auto e : std::views::reverse(x) )
//	for ( auto e : std::views::take(x, 3) )
//	for ( auto e : std::views::reverse( std::views::take(x, 3) ) )
//	for ( auto e : std::views::drop(x, 3) )
//	for ( auto e : std::views::filter(x, is_odd_number) )
	for ( auto e : std::views::filter(x, [](int n) { return n % 2 == 1; }   ) )
	{
		std::cout << e << ", ";
	}
}