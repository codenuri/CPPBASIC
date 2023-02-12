#include <iostream>

class Car
{	
public:
	int speed{0};
	static int count;

	Car()  {++count;}
	~Car() {--count;}
};
int Car::count{0};

int main()
{
	Car c1;
	Car c2;
	c1.speed = 10;
	std::cout << c1.count   << std::endl; 	
	std::cout << Car::count << std::endl; 														
}

