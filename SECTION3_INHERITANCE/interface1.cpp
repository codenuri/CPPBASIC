#include <print>

class Camera
{
public:
	void take() { std::println("take picture"); }
};

class HDCamera
{
public:
	void take() { std::println("take HD picture"); }
};

class People
{
public:
	void use_camera(Camera* p) { p->take(); }
	void use_camera(HDCamera* p) { p->take(); }
};

int main()
{
	People p;
	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc); // ?
}