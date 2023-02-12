#include <iostream>
#include <cstring>

int main()
{
	char s1[] = "abcd";
	char s2[5];

//	s2 = s1; // error
	strcpy_s(s2, s1);

//	if ( s2 == s1 )
	if ( strcmp(s2, s1 ) == 0 )
		std::cout << "same" << std::endl;
	else
		std::cout << "not same" << std::endl;
}