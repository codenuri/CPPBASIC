#include <print>

class Car 
{
	int color;
public:
	~Car()    { std::println("~Car");  }
	void go() { std::println("Car Go");}
};

class Ptr 
{
	Car* obj;
public:
	explicit Ptr(Car* p = nullptr) : obj{p} {}

	~Ptr() { delete obj;}

	Car* operator->() { return obj;}
	Car& operator*()  { return *obj;}
};

int main()
{
//	Car* p = new Car; // 사용후 delete 해야 한다.
	Ptr p( new Car );  // p는 객체, 타입 Ptr

	// Ptr의 객체 p가 Car* 역활을 수행
	p->go();	// p.operator->()go()
				// (p.operator->())->go()

	(*p).go();	// (p.operator*()).go()
}

