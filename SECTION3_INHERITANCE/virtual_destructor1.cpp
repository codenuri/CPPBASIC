#include <iostream>
using namespace std;

class Base
{
public:
    Base()  { cout << "Base()" << endl;}
    virtual ~Base() { cout << "~Base()" << endl;}
};

class Derived : public Base
{
public:
    Derived()  { cout << "Derived()"  << endl;}
    virtual  ~Derived() { cout << "~Derived()" << endl;}    
};

int main()
{
    Base* p = new Derived; // Derived 객체 생성
    
    // 컴파일러는 p가 Base 라고만 생각.
    delete p;  // 1. p는 Base*이다.
               // 2. 소멸자는 가상함수가 아니다.
}







