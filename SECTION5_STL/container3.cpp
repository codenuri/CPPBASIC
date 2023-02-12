#include <vector>
#include <list>

int main()
{
	// 1. 대부분 컨테이너의 멤버 함수 이름이 동일
	// std::vector c = {1,2,3};
	std::list c = {1,2,3};

	c.push_back(4);
	c.resize(10);
	auto sz = c.size();


	// 2. 제거와 반환을 동시에 하는 멤버 함수는 없다
	auto n = c.back(); 
	c.pop_back();
}