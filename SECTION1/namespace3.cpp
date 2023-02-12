#include <stdio.h>

namespace Video
{
	void init()	{ printf("init Video module\n"); }
}
namespace Audio
{
	void init() { printf("init Audio module\n"); }
}
//void init() { printf("init global module\n"); }

using Audio::init;

int main()
{
	Video::init();
	Audio::init();

//	using Audio::init;
	::init();
	init();
}