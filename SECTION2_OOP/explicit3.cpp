#include <vector>
#include <string>

void f1(std::string s)     {}
void f2(std::vector<int> v){}

int main()
{
	std::string s1("hello");
	std::string s2 = "hello"; // ok

	std::vector<int> v1(10);
	std::vector<int> v2 = 10; // error

	f1("hello"); // ok. string s = "hello"
	f2(10);      // error. vector<int> v = 10

	std::vector<int> v3 = 10;   // error
	std::vector<int> v4 = {10}; // ok
}