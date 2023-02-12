// C#, java style
class Person
{
	private	string name;
	private int age;

	public void setAge(int value)
	{
		if ( value >= 1 && value < 150 )
			age = value;
	}
}