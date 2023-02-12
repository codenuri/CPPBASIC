#include <print>

int db_backup()
{
	if ( 1 )  
		throw 1;

	std::println("continue db_backup");

	return 0;
}

int main()
{
	try
	{
		int ret = db_backup();

	}
	catch(int e)
	{
		std::println("exception!!");
	}

	std::println("continue main");
}