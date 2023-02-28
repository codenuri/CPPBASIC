#include <iostream>
#include <typeinfo>

class Animal 
{
public:
    virtual ~Animal() {}
};

class Dog : public Animal 
{
public:
    int color;
};

void foo(Animal* p)
{
    //const std::type_info& t = typeid(p);
    const std::type_info& t = typeid(*p);
    std::cout << t.name() << std::endl;
    
    if ( typeid(*p) == typeid(Dog))
    {
        Dog* pDog = static_cast<Dog*>(p);
        pDog->color = 10;
        std::cout << "Dog" << std::endl;
    }
}

int main()
{
    Animal a; foo(&a);
    Dog    d; foo(&d);    
}
















