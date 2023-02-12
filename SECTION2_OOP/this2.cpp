class Counter
{
	int count{0};
public:
	void reset(int count = 0)
	{
		this->count = count;
	}
	Counter* increment()
	{
		++count;
		return this;
	}
	Counter& decrement()
	{
		--count;
		return *this;
	}
};
int main()
{
	Counter c;	
	c.increment()->increment()->increment();
	c.decrement().decrement().decrement();
}