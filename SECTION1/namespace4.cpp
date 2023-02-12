namespace Video
{
	void init() 
	{		
	}

	namespace Render
	{
		void start()
		{
		}
	}
}
int main()
{
	Video::init();
	Video::Render::start();

	using namespace Video;
	init();
	Render::start();
}