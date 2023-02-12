#include <print>
#include <cstdlib>

int urand()
{
	return rand() % 10;
}

int main()
{
	for ( int i = 0; i < 10; i++)
		std::print( "{}, ", urand() );
}