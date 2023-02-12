int square(int a)    // square_int(  )
{
	return a * a;
}

double square(double a) // square_double( )
{
	return a * a;
}

int main()
{
	square(3);   // square_int(3)
	square(3.4); // square_double(3.4)
}