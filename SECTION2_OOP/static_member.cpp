
class Car
{
	int speed;
	static int cnt;
public:
	void Go()   {}
	void Stop() {}
	static int getCount() { return cnt;}
};
int Car::cnt = 0;
