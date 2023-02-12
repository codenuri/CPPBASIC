#include <string>

class People1
{
	std::string name;
	int age;
public:
	People1(const std::string& s, int a) 
	{
		name = s; // 대입
		age = a;
	}
};

class People2
{
	std::string name;
	int age;
public:
	People2(const std::string& s, int a) 
			: name{s}, age{a} // 초기화
	{
	}
};

int main()
{
	std::string s{"kim"};

	People1 p1(s, 20);
	People2 p2(s, 20);
}


