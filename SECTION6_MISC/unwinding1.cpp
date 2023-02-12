#include <print>

struct Object 
{ 
	~Object() { std::println("~Object"); } 
};

void f3() 
{
	std::println("f3 start");
	throw 1;
	std::println("f3 finish");
}
void f2() 
{ 
	std::println("f2 start");
	Object obj; 
	f3();
	std::println("f2 finish");
}
void f1() 
{ 
	std::println("f1 start");
	Object obj; 
	f2();
	std::println("f1 finish");
}

int main()
{
	f1();
	try
	{
		f1();
	}
	catch( ... )
	{
	}
}