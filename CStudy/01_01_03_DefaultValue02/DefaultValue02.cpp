// 문제 2
// 다음과 같은 형태로의 함수 오버로딩은 문제가 있다.
// 어떠한 문제가 있는지 설명해보자.

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

int main(void)
{
	//SimpleFunc(); // 함수를 호출했을 때 오버로딩 함수 중 어떤 함수를 호출하고자 하는 것인지 알 수가 없다.
	return 0;
}