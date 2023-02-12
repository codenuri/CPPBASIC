#include <print>
#include <memory>

class Car 
{
	int color;
public:
	~Car()    { std::println("~Car");  }
	void go() { std::println("Car Go");}
};

int main()
{
//	std::shared_ptr<Car> sp1 = new Car; // error
	std::shared_ptr<Car> sp2(new Car);  // ok
	std::shared_ptr<Car> sp3{new Car}; 	// ok

	sp2->go();
}