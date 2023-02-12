#include <iostream>

/*
namespace std
{
	class ostream
	{
	};

	ostream cout;
}
*/

int main()
{	
	std::cout << 10; // cout.operator<<(10)
	
	std::cout.operator<<(10);
}
