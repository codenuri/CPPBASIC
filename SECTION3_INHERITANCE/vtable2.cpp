#include <print>
class Base
{
	int bm{0};
public:
	virtual void f1() {}
	virtual void f2() {}
	virtual void f3() {}
};
class Derived : public Base
{
	int dm{0};
public:
	void f2() override {}
};
int main()
{
	Base b1, b2;
	Derived d1;

	std::println("{}, {}", sizeof(b1), sizeof(d1));

	Base* p = &d1;
	p->f2();  // p->ptrtable[2]() 
}