namespace std
{
	class string{};

	string operator+(const string& s1, const string& s2)
	{
		return s1; // 정확하지 않은 구현. 
	}
}

int main()
{
	std::string s1;
	std::string s2;

	s1 + s2; 	// operator+(s1, s2)
	operator+(s1, s2);
	std::operator+(s1, s2);

}