#include <iostream>
using namespace std;

class Base
{
    int data1;
public:
    void f1()         {}
    virtual void f2() {}
    virtual void f3() {}
    virtual void f4() {}    
};

class Derived : public Base
{
    int data2;
public:
    void f1()         {}
    virtual void f2() {}    
};

int main()
{
    std::cout << sizeof(Base) << std::endl;
    std::cout << sizeof(Derived) << std::endl;
}






