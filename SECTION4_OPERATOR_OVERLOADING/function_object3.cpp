#include <print>
#include <cstdlib>

class URandom
{	
	// 멤버 데이타
public:
	int operator()() 
	{
		return rand() % 10;
	}
};
URandom urand;

int main()
{
	for ( int i = 0; i < 10; i++)
		std::print( "{}, ", urand() );
}