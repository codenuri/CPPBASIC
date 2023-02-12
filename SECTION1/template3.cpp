#include <cstdio>

/*
auto square(auto a)
{
	auto n; // error
	return a * a;
}
*/

//template<typename T> 
template<class T> 
T square(T a)
{
	return a * a;
}

int main()
{
	square<int>(3);
	square(3); // square는 함수 아님
			   // => square<int>(3)

//	printf("%p\n", &square); // error
	printf("%p\n", &square<int>); // ok
	printf("%p\n", &square<double>); // ok
}