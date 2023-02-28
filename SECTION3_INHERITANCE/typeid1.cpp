#include <typeinfo>
#include <print>

class Animal
{
	int age;
public:
	virtual ~Animal() {}
};
class Dog : public Animal {};

int main()
{
	Dog d;
	Animal* p = &d;

	const std::type_info& t = typeid(*p);

	std::println("{}", t.name());
}