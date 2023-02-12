#include <print>

template<typename T>
class Ptr 
{
	T* obj;
public:
	explicit Ptr(T* p = nullptr) : obj{p} {}

	~Ptr() { delete obj;}

	T* operator->() { return obj;}
	T& operator*()  { return *obj;}
};

int main()
{
	Ptr<int> p1( new int);
	*p1 = 10;
	std::println("{}", *p1); // 10
}
