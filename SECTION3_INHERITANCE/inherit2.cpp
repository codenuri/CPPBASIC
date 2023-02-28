#include <iostream>
#include <string>

class Person
{
    std::string name;
    int age;
};

class Professor : public Person
{
    int major;    
};

class Student : public Person
{
    int id;
};

class ParttimeStudent : public Student
{
    int salary;
};

int main()
{
    Professor p;
    Student   s;
}







