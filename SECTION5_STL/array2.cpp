#include <array>

int main()
{
	// C++17 부터는 초기값이 있으면 타입 인자 생략가능
	std::array arr1 = {1,2,3,4,5};


	// 초기값이 없거나 
	// C++17 이하의 환경에서는 타입인자를 전달해야 한다.
	std::array<int, 5> arr2; 		
	std::array<int, 5> arr3 = {1,2,3,4,5}; 		
}