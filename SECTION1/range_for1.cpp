#include <iostream>

int main()
{
	int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// for statement
//	for ( int i = 0; i < 10; i++)
//	for ( int i = 0; i < sizeof(x) / sizeof(x[0]) ; i++)
	for ( int i = 0; i < std::size(x) ; i++)
	{
		std::cout << x[i] << ", ";
	}
	std::cout << std::endl;

//	for ( int e : x )
	for ( auto e : x )
	{
		std::cout << e << ", ";
	}
}
