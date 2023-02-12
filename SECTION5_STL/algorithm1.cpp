#include <algorithm>
#include <vector>
#include <list>

int main()
{
	std::list   s = {1, 2, 3, 4, 5};
	std::vector v = {1, 2, 3, 4, 5};

	// 각 컨테이너 에서 3을 검색 하고 싶다.

	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(v.begin(), v.end(), 3);
}
