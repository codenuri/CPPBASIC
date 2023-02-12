// qualified name
#include <stdio.h>
#include <algorithm>

int count = 10;

int main()
{
	int n1 = std::max(10, 20);
	int n2 = std::min(10, 20);

	printf("%d, %d\n", n1, n2);

	printf("%d\n", count);
}
