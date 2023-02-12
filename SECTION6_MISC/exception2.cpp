#include <print>

int db_backup()
{
	if ( 1 )  // 실패라고 가정.
		throw 1;

	std::println("continue db_backup");

	return 0;
}

int main()
{
	int ret = db_backup();

	std::println("continue main");
}