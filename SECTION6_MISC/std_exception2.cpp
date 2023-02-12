#include <print>
#include <vector>

int main()
{
	std::vector v = {1, 2};

	try
	{
		v[100] = 0;
	//	v.at(100) = 0;
	}
	catch( const std::out_of_range& e)
	{
		std::println("what : {}", e.what());	
	}

	std::println("continue main");
}
