void fast_alogithm() 
{
	// 성능은 좋지만 
	// 실패(예외) 가능성이 있는 알고리즘
}
 
void slow_algorithm() noexcept
{
	// 느리지만 실패하지 않는 알고리즘
}

int main()
{
	if( noexcept(fast_alogithm()) )
		fast_alogithm();
	else
		slow_algorithm();

}