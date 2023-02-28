#include <print>



// 규칙 : 모든 카메라는 ICamera 로 부터 파생 되어야 한다.
// 규칙 : 모든 카메라는 ICamera 인터페이스를 구현해야 한다.
//class ICamera
struct ICamera
{	
//public:
	virtual ~ICamera() {}

	virtual void take() = 0;	
};




class People
{
public:
	void use_camera(ICamera* p) { p->take(); }
};

class Camera : public ICamera
{
public:
	void take() { std::println("take picture"); }
};

class HDCamera : public ICamera
{
public:
	void take() { std::println("take HD picture"); }
};

class UHDCamera : public ICamera
{
public:
	void take() { std::println("take UHD picture"); }
};

int main()
{
	People p;
	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc); // ok

	UHDCamera uhc;
	p.use_camera(&uhc); // ok
}

