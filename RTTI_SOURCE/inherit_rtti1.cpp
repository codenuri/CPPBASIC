#include <iostream>
#include <typeinfo>

class Animal {};

class Dog : public Animal 
{
public:
    int color;
};

void foo(Animal* p)
{
    // p°¡ Dog ¶ó¸é
    p->color = 10; // error
}

int main()
{
    Animal a; foo(&a);
    Dog    d; foo(&d);    
}


