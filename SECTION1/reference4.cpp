#include <iostream>
#include <algorithm>

// C 언어
void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

// C++
namespace utils
{
	template<class T>
	inline void swap(T& r1, T& r2)
	{
		T temp = r1;
		r1 = r2;
		r2 = temp;
	}
}
int main()
{
	int x = 10, y = 20;

//	swap(&x, &y);
//	utils::swap(x, y);
	std::swap(x, y);

	std::cout << x << std::endl; // 20
	std::cout << y << std::endl; // 10
}