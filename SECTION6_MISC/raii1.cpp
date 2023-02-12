#include <print>

class mutex
{
public:
	void lock()   { std::println("mutex lock"); }
	void unlock() { std::println("mutex unlock"); }
};

mutex m;

class lock_guard
{
	mutex& mtx;

public:
	lock_guard(mutex& m): mtx(m) { mtx.lock();}
	~lock_guard() { mtx.unlock();}
};

void fn()
{
	lock_guard g(m); // m.lock()
//	m.lock();
	
	throw 1;

//	m.unlock();
}

int main()
{
	try { fn();} 
	catch(...){}
}