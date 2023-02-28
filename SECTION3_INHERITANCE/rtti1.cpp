class Animal
{
public:
	virtual ~Animal() {}
};
class Snake : public Animal {};

class Dog : public Animal 
{5
public:
	void run() {}
};
void fn(Animal* pa)
{
	pa->run(); // error
	
	Dog* pd = static_cast<Dog*>(pa);
	pd->run();
}
int main()
{
	Dog d;
	fn(&d);
}