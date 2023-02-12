#include <print>
#include <string>

int main()
{
	try
	{
		int n = std::stoi("KK");

		std::println("result : {}", n);
	}
//	catch( const std::invalid_argument& e)
//	catch(...)
	catch( const std::exception& e)
	{
		std::println("what : {}", e.what());
	}
}
