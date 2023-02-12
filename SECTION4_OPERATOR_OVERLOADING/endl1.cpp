#include <stdio.h>

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int    arg) { printf("%d", arg); return *this;}
		ostream& operator<<(char   arg) { printf("%c", arg); return *this;}
		ostream& operator<<(const char* arg) { printf("%s", arg); return *this;}
		ostream& operator<<(void*  arg) { printf("%p", arg); return *this;}

		ostream& operator<<(ostream&(*f)(ostream&))
		{
			 f(*this); // endl(cout), tab(cout)
			 return *this;
		}
	};
	ostream cout;

	ostream& endl(ostream& os)
	{
		os << '\n';
		return os;
	}
}

std::ostream& tab(std::ostream& os)
{
	os << '\t';
	return os;
}

std::ostream& menu(std::ostream& os)
{
	os << "1. AAA\n";
	os << "2. BBB\n";
	return os;
}

int main()
{	
	std::endl( std::cout ); 
	std::cout << std::endl; // cout.operator<<(endl 즉, 함수포인터)

	std::cout << "A" << tab << "B" << std::endl;

	std::cout << menu;
}
