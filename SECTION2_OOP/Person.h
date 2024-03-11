#pragma once
#include <string>

class Person
{
	std::string name;
	int age;
public:
	Person(const std::string& n, int a);
	void setAge(int a);
};
