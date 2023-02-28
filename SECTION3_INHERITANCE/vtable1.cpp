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
	Base    base;
	Derived derived;
	
	Base* p = &derived;
	p->f2();
}