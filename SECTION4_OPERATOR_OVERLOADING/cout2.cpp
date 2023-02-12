#include <stdio.h>

namespace std
{
	class ostream
	{
		// 출력버퍼
	public:
		ostream& operator<<(int    arg) { printf("%d", arg); return *this;}
		ostream& operator<<(char   arg) { printf("%c", arg); return *this;}
		ostream& operator<<(const char* arg) { printf("%s", arg); return *this;}
		ostream& operator<<(void*  arg) { printf("%p", arg); return *this;}
	};
	ostream cout;
}

int main()
{	
	std::cout << 10 << '\t' << 20 << '\n';
	std::cout << 10; // std::cout.operator<<(int)

}
