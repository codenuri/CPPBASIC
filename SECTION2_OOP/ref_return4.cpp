#include <iostream>

class Counter
{
	int count{0};
public:
//	Counter increment()
	Counter& increment()
	{
		++count;
		return *this;
	}
	int get() { return count;}
};

int main()
{
	Counter c;	

	c.increment().increment().increment();

	std::cout << c.get() << std::endl;
}