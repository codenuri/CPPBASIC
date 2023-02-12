#include <cstdlib>

int main()
{
//	int* p1 = (int*)malloc(100);// ok
	int* p1 = static_cast<int*>(malloc(100));// ok
	free(p1);

	int n = 10;
//	double* p2 = (double*)&n;  // ok
	double* p2 = static_cast<double*>(&n);
						// error

	const int c = 10;
//	int* p3 = (int*)&c; 	   // ok
	int* p3 = static_cast<int*>(&c);
						// error
}

	