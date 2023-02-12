#include "Rect.h"

Rect::Rect(int x, int y, int w, int h)
		: x{x}, y{y}, w{w}, h{h} 
{
} 
int Rect::getArea() const
{
	 return w * h;
}