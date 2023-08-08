#include <iostream>
#include <cstring>

class Person
{
    char* name;
    int   age;
public:
    Person(const char* n, int a) : age(a)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    ~Person() { delete[] name;}


    Person(const Person& p) : age(p.age)
    {
    //    age = p.age; 
    //    name = p.name;
    
        // 포인터는 복사 하지말고. 새롭게 메모리 할당
        name = new char[strlen(p.name) + 1];
        strcpy(name, p.name);        
    }
};


int main()
{
    Person p1("kim", 20);
    Person p2 = p1; 

}



