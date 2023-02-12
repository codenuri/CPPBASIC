#include <print>
#include <vector>
#include <ranges>

int main()
{
	std::vector v = {1,2,3,4,5};

	auto p = v.begin();

	for (int i = 0; i < 3; i++)
	{
	//	v[i] = 0; // list 안됨.
		*p = 0;   // 모든 컨테이너 가능.
	}
}
