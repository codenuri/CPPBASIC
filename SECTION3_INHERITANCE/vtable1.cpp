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
    Base    base1;
    Derived derv1;
    
    Base* p = &derv1;
    
    p->f1(); // Base::f1
    p->f2(); // Derived::f2  
        // p->vptr[0]()
             
    Base base2;
    Derived derv2;
}






