// using declaration
#include <stdio.h>
#include <algorithm>
using std::max;
using std::min;

int main()
{
	int n1 = max(10, 20);
	int n2 = min(10, 20);

	printf("%d, %d\n", n1, n2);

}
