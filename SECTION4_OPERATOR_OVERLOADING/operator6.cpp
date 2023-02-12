#include <string>

int main()
{
	std::string s1 = "hello";
	std::string s2 = "world";

	auto ret1 = s1 + s2; 
//	auto ret2 = s1.operator+(s2); // error
	auto ret3 = operator+(s1,s2); 
}
