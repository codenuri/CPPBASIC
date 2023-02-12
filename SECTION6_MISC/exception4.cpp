#include <print>

class file_not_found
{
	// 오류의 정보를 담는 멤버.
};

int db_backup()
{
	if ( 1 )  
		throw file_not_found{};

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
		std::println("exception!!");
	}
}