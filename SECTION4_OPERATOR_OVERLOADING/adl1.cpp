namespace Graphics
{
	class Point {};

	void draw_pixel(const Point& p1) {}

	void set_color(int c) {}
}

int main()
{
	Graphics::Point pt;
	Graphics::draw_pixel(pt);
	
	draw_pixel(pt);
}
