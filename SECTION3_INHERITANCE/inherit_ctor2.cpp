#include <iostream>
using namespace std;

class Base
{
    int data;
public:
    Base()       { cout << "Base()"    << endl; }
    Base(int a)  { cout << "Base(int)" << endl; }
    ~Base()      { cout << "~Base()"   << endl; }
};

class Derived : public Base
{
public:
    Derived()      : Base() { cout << "Derived()"    << endl; }
    Derived(int a) : Base() { cout << "Derived(int)" << endl; }
    ~Derived()      { cout << "~Derived()"   << endl; ~Base(); }
};

int main()
{
//    Derived d;
    Derived d(5);
    
}


