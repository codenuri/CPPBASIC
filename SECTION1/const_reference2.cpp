struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

// 다음중 좋은 코드는 ?
void f1(Rect r)        {}
void f2(const Rect& r) {} // 좋은 코드 

void f3(int n)        {} // 좋은 코드
void f4(const int& r) {}