class Base
{
public:
    virtual void f1()    {}
    virtual void f2(int) {}
    virtual void f3() const {}
    virtual void f4() {}
};

class Derived : public Base
{
public:
//    virtual void ff1() override {}
//    virtual void f2(double) override {}
//    virtual void f3() override {}
    
    virtual void f4() final {}
};
class Derived2 : public Derived
{
public:
    virtual void f4()  {}
};

int main()
{
    
}