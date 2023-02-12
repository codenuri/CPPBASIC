#include <iostream>

template<class T> 
class vector
{
	T* buff;
	int  size;
public:
	vector(int sz) 
	{
		size = sz;
		buff = new T[size];
	}
	~vector() {	delete[] buff;	}

	void resize(int newsize)
	{
		if ( newsize > size )
		{
			T* temp = new T[newsize];
			memcpy(temp, buff,sizeof(T) * size);
			delete[] buff;
			buff = temp;
			size = newsize;
		}
	}
	void setAt(int idx, const T& value)
	{
		buff[idx] = value;
	}
	T getAt(int idx)
	{
		return buff[idx];
	}
};

int main()
{
	vector<double> v(5);

	v.setAt(0, 3.4);

	std::cout << v.getAt(0) << std::endl; // 3.4

}