#include <iostream>

class Car
{
	int speed{0};
public:
	int count{0};

	Car()  {++count;}
	~Car() {--count;}
};

int main()
{
	Car c1;
	Car c2;

	std::cout << c1.count << std::endl; // 2?
										// 1
}