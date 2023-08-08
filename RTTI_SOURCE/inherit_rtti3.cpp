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
    //Dog* pDog = static_cast<Dog*>(p);
    
    Dog* pDog = dynamic_cast<Dog*>(p);
    
    if ( pDog != 0 )
    {
        pDog->color = 10;
    }
    std::cout << pDog << std::endl;
}

int main()
{
    Animal a; foo(&a);
    Dog    d; foo(&d);    
}
















