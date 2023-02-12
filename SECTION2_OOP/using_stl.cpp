#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1(5);
	std::vector<int> v2(5, 3);
	std::vector<int> v3 = {1,2,3,4,5};

	v3[0] = 99;

	v3.push_back(3);

	std::cout << v3.size() << std::endl; // 6

}