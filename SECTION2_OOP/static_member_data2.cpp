#include <iostream>

int count{0};
//int count_truck{0};

class Car
{
	int speed{0};
public:
	Car()  {++count;}
	~Car() {--count;}
};
int main()
{
	Car c1;
	Car c2;

	count = 100;

	std::cout << count << std::endl; // 2
									
}