#include <print>
#include <vector>

void check(const std::vector<int>& v) 
{
	std::println("capacity : {}, size : {}", v.capacity(), v.size() );				 
}

int main()
{
	std::vector v = { 1, 2, 3, 4, 5 };

	v.resize(3); 

	check(v);	// c : 5    s : 3


	v.push_back(0);	// capacity > size 이므로
					// 빠르게 동작 
	
	check(v);	// c : 5   s : 4

	v.shrink_to_fit();		

	check(v);	// c : 4   s : 4

	v.push_back(0); // capacity == size  이므로 메모리 재할당 필요
					// 느리다.

	check(v);	// c : ?   s : 5

	v.clear();	// 메모리를 제거하지는 않음.
				// size 만 0으로

	check(v);

	v.resize(0); // 또는 v.clear()

	v.shrink_to_fit();

	check(v);
}




