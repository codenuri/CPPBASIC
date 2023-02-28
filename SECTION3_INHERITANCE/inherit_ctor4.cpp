#include <string>

class Person
{
    std::string name;
    int age;
public:
    Person( std::string n, int a) : name(n), age(a) {}
};

class Student : public Person
{
    int id;
public:
    Student()      : Person("unknown", 0),  id(0) {}
    
    Student(std::string n, int a, int i) 
                   : Person(n, a),  id(i) {}
};

int main()
{
    Student s1;
    Student s2("kim", 20, 100);
}


