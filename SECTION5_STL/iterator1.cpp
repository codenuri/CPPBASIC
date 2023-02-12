#include <print>
#include <list>
#include <vector>

int main()
{
	int x[5] = {1, 2, 3, 4, 5};	

	int* p1 = x;
	++p1;
	std::println("{}", *p1); // 2	


	std::list s = {1, 2, 3, 4, 5};
	
	auto p2 = s.begin();
	++p2;
	std::println("{}", *p2); // 2	


	std::vector v = {1, 2, 3, 4, 5};
	
	auto p3 = v.begin();
	++p3;
	std::println("{}", *p3); // 2	
}