#include <print>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
	// 1. 
	std::vector v = { 1, 3, 10, 30, 4, 7, 8, 20};

	for (auto e : v) 
		std::print("{}, ", e);
	std::println("");


	// 2.
	//std::replace(v.begin(), v.end(), 3, 0);
	std::replace_if(v.begin(), v.end(), [](int n) { return n >= 10;}, 0);

	for (auto e : v) 
		std::print("{}, ", e);
	std::println("");

	// 3. 
	int n = std::accumulate(v.begin(), v.end(), 0);
	std::println("{}, ", n);


	// 4. 

//	std::sort(v.begin(), v.end());
	std::sort(v.begin(), v.end(), [](int a, int b) { return a > b;} );

	for (auto e : v) 
		std::print("{}, ", e);
	std::println("");

	// 5. 
	std::fill(v.begin(), v.end(), 1);

	for (auto e : v) 
		std::print("{}, ", e);
	std::println("");

}
