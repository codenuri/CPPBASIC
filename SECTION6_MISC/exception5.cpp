#include <print>

class file_not_found {};
class network_disconnected {};
class authentication_failed {};

int db_backup()
{
	if ( 1 )  
		throw file_not_found{};

	if ( 2 )  
		throw network_disconnected{};

	if ( 3 )  
		throw authentication_failed{};

	// ...... 

	return 0;
}

int main()
{
	try
	{
		int ret = db_backup();
	}
	
	catch(const file_not_found& e)
	{
		std::println("file_not_found!!");
	}
	catch(const network_disconnected& e)
	{
		std::println("network_disconnected!!");
	}	
	catch(...)
	{
		std::println("...");
	}
}