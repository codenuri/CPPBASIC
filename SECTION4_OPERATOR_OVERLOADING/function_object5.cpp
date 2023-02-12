#include <print>
#include <cstdlib>
#include <bitset>

class URandom
{	
	std::bitset<10> bs;
	bool recycle;
public:
	URandom(bool b = false) : recycle{b} 
	{
		bs.set(); // 10 비트 모두를 1로
	}

	int operator()() 
	{
		if ( bs.none() )
		{
			if ( recycle )
				bs.set();
			else 
				return -1;
		}

		int v = -1;

		while( ! bs.test(v = rand() % 10) );

		bs.reset(v);	

		return v;
	}
};
//URandom urand;
URandom urand(true);


int main()
{
	for ( int i = 0; i < 15; i++)
		std::print( "{}, ", urand() );

	std::println("");
}