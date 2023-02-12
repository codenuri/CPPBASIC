int foo()
{
	return 0;
}
int main()
{
	int ret = foo();

	if ( ret == 0 )
	{
	}

	// C++17
	if ( int ret = foo(); ret == 0 )
	{		
	}

	switch( int n = foo(); n)
	{
		case 1: break;
	}
	// C++20 : range - for 도 가능
	for( int x[3] = {1,2,3}; auto n : x)
	{		
	}

//	while( int cnt = 0; cnt < 10) // error
//	{
//		++cnt;	
//	}

}