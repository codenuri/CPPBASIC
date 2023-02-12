#include <iostream>

class Number
{
	int value;
public:
	Number(int n) : value(n) {}

	int& get()       { return value;} // 1
	int  get() const { return value;} // 2
};
int main()
{
	Number num(10);
	const Number cnum(10);

	cnum.get(); // 2번만 가능
	num.get();  // 1번 호출, 없다면
				// 2번 호출.

	num.get() = 20;  // ok
	cnum.get() = 20; // error
}