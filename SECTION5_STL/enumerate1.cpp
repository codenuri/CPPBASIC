#include <print>
#include <vector>

int main()
{
	std::vector v = {1,2,3,4,5};

//	for( auto e : v)
	for( auto& e : v)
	{
		e *= 2;
	}


	for( auto e : v)
		std::println("{}", e);
}
