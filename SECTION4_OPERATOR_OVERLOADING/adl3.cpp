#include <algorithm>
#include <string>

int main()
{
	int n1 = 10;
	int n2 = 20;

	std::string s1 = "AAA";
	std::string s2 = "BBB";

	std::swap(n1, n2);	
	std::swap(s1, s2);

	swap(n1, n2);	// error
	swap(s1, s2);	// ok

}
