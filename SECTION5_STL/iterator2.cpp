#include <list>
#include <vector>
#include <ranges>

int main()
{
	// 1. 반복자의 정확한 타입
//	std::list c = {1, 2, 3, 4, 5};
//	std::vector c = {1, 2, 3, 4, 5};
	int c[5] = {1, 2, 3, 4, 5};

//	std::list::iterator p = c.begin();
//	std::list<int>::iterator p = c.begin();
//	std::vector<int>::iterator p = c.begin();
	auto p = c.begin();


	// 2. 반복자를 꺼내는 방법
	auto p2 = c.begin();	// raw array 라면 error
	auto p3 = std::begin(c);
	auto p4 = std::ranges::begin(c);
}