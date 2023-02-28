#include "Student.h"

Student::Student() : Person("unknown", 0), id(0) 
{
    
}

Student::Student(std::string n, int a, int i) 
        : Person(n, a), id(i) 
{
    
}