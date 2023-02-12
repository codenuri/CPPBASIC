// using directive
#include <stdio.h>
#include <algorithm>
using namespace std;

int count = 10;

int main()
{
	int n1 = max(10, 20);
	int n2 = min(10, 20);

	printf("%d, %d\n", n1, n2);

	printf("%d\n", count);
	 // std::count 라는 함수가 있다
}
