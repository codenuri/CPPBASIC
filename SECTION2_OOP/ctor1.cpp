#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int         age;

public:
//	void init()
	Person()
	{
		name = "kim";
		age = 20;
		std::cout << "Constructor"
						 << std::endl;
	}
	~Person()
	{
		std::cout << "Destructor" << std::endl;
	}
};

int main()
{
//	Person p = {"kim", 25};
	Person p;
//	p.init();
	std::cout << "____" << std::endl;

}




