#include <iostream>

int main()
{
//	int arr[5];

	int* buff = new int[5];

	buff[0] = 10;
	//----------------------------------
	int* temp = new int[10];

	memcpy( temp, buff, sizeof(int)*5);
	delete[] buff;

	buff = temp;
	//----------------------------------
	buff[7] = 10;
	
	delete[] buff;
}