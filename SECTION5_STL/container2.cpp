#include <vector>

int main()
{
	// 1. C++17 부터는 초기값이 있는 경우 타입 인자 생략 가능
	std::vector<int> v1 = {1, 2, 3, 4, 5};
	std::vector      v2 = {1, 2, 3, 4, 5}; // C++17 부터 가능

	// 2. 초기값이 없는 경우는 반드시 타입인자를 전달해야 한다.
	std::vector      v3; // error
	std::vector<int> v4; // ok

	std::vector      v5(10, 3); // 10개를 3으로 초기화, 타입인자 생략가능
	std::vector<int> v6(10);	// 타입 인자 필요


	// 3. () 와 {} 를 주의 할것
	std::vector v7(10, 3); // 10개를 3으로 초기화
	std::vector v8{10, 3}; // 2개를 10, 3으로 초기화, 아래 코드와 동일
	std::vector v9 = {10, 3}; // 
}