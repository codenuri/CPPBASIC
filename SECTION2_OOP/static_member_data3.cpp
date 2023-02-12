#include <iostream>


class Car
{
	int speed{0};
public:
	static int count;

	Car()  {++count;}
	~Car() {--count;}
};
int Car::count{0}; // = 0

int main()
{
	Car c1;
	Car c2;

	std::cout << Car::count << std::endl; 							
}

