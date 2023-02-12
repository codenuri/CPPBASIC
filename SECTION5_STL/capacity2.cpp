#include <print>
#include <vector>

void check(const std::vector<int>& v) 
{
	std::println("capacity : {}, size : {}", v.capacity(), v.size() );				 
}

int main()
{
	std::vector<int> v1;	// capacity : 0    size : 0
	check(v1);			

	std::vector<int> v2(5);	// capacity : 5    size : 5
	check(v2);	

	std::vector<int> v3;
	v3.reserve(5);			// capacity : 5    size : 0
	check(v3);	
}




