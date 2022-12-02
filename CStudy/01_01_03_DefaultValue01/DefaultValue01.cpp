// 문제 1
// 예제 DefaultValue3.cpp에 정의된 함수 BoxVolume를 '매개변수의 디폴트 값 지정' 형태가 아닌.
// '함수 오버로딩'의 형태로 재구현해보자.
// 물론 main 함수는 변경하지 않아야 하며,
// 실행결과도 동일해야 한다.

#include <iostream>

// 매개변수의 디폴트 값 지정
// int BoxVolume(int length, int width = 1, int height = 1);

// 함수 오버로딩
int BoxVolume(int _iNum1, int _iNum2, int _iNum3);
int BoxVolume(int _iNum1, int _iNum2);
int BoxVolume(int _iNum1);

int main(void)
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	//std::cout << "[D, D, D] : " << BoxVolume() << std::endl;
	return 0;
}

// 매개변수의 디폴트 값 지정
//int BoxVolume(int length, int width, int height)
//{
//	return length * width * height;
//}

int BoxVolume(int _iNum1, int _iNum2, int _iNum3)
{
	int i_Result;
	i_Result = _iNum1 * _iNum2 * _iNum3;

	return i_Result;
}

int BoxVolume(int _iNum1, int _iNum2)
{
	int i_Result;
	i_Result = _iNum1 * _iNum2;

	return i_Result;
}

int BoxVolume(int _iNum1)
{
	return _iNum1;
}
