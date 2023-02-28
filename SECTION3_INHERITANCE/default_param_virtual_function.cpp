#include <print>

class Base
{
public:
	virtual ~Base() {}
	virtual void f(int a = 10) { std::println("Base : {}", a);}	
};
class Derived : public Base 
{
public:
	void f(int a = 20) override { std::println("derived : {}", a);}	
};
int main()
{
	Derived d;
	Base* p = &d;

	p->f(); // derived : 10 
			// p->가상함수테이블[1]( 10 )
}