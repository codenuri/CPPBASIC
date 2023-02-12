#include <stdio.h>

namespace Audio
{
	void init()
	{
		printf("init Audio module\n");
	}
}
namespace Video
{
	void init()
	{
		printf("init Video module\n");
	}
}
int main()
{
//	init(); // error
	Audio::init();
	Video::init();
}