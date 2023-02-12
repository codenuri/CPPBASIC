#include <vector>
#include <array>	

int main()
{
	int x[5]      = {1,2,3,4,5};
	std::vector v = {1,2,3,4,5};

	x[0] = 10;
	v[0] = 10;

	std::array  a = {1,2,3,4,5};
	a[0] = 10;

	auto n = a.size(); // ok.. 멤버 함수가 있다.

	a.resize(3);		// error
	a.push_back(3);		// error
}