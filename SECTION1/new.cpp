#include <iostream>
#include <cstdlib>

int main()
{
	//							4
	int* p1 = (int*)malloc(sizeof(int));
	free(p1);

	int* p2 = new int;
	delete p2;

	int* p3 = new int[10];
	delete[] p3;
//	delete p3;

}