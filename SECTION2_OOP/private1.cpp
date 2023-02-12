#include <string>

//struct Person
class Person
{
//private:
	std::string name;
	int age;

public:
	void setAge(int value)
	{
		if ( value >= 1 && value < 150 )
			age = value;
	}
};

int main()
{
	Person p;
//	p.age = -10; // error
	p.setAge(-10);
}