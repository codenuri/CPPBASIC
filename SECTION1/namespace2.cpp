#include <stdio.h>

namespace Video
{
	void init()	{ printf("init Video module\n"); }
}

namespace Audio
{
	void init() { printf("init Audio module\n"); }
	void reset(){ printf("reset Audio module\n");}
}

int main()
{
	Audio::init();

	using Audio::init;
	using Video::init;
	init();
//	reset(); // error

	using namespace Audio;
	init();
	reset();
}