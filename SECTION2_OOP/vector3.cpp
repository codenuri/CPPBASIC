#include <iostream>

class vector
{
	int* buff;
	int  size;
public:
	vector(int sz) 
	{
		size = sz;
		buff = new int[size];
	}
	~vector() {	delete[] buff;	}

	void resize(int newsize)
	{
		if ( newsize > size )
		{
			int* temp = new int[newsize];
			memcpy(temp, buff,sizeof(int) * size);
			delete[] buff;
			buff = temp;
			size = newsize;
		}
	}
	void setAt(int idx, int value)
	{
		buff[idx] = value;
	}
	int getAt(int idx)
	{
		return buff[idx];
	}
};

int main()
{
	vector v(5);

	v.setAt(0, 55);

	v.resize(10);
	
	std::cout << v.getAt(0) << std::endl; // 55

}