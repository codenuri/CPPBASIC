#include "Person.h"

class Student : public Person
{
    int id;
public:
    Student();
    Student(std::string n, int a, int i);
};