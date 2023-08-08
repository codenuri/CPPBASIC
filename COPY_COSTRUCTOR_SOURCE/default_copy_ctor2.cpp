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
};

int main()
{
    Person p1("kim", 20);
    Person p2 = p1; // 실행시 오류발생..

}