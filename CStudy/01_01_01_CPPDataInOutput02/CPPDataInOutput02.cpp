// 문제 2
// 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서,
// 입력 받은 데이터를 그대로 출력하는 프로그램을 작성해 보자.

#include <iostream>

int main()
{
	char c_Name[100];
	int i_Number;

	std::cout << "이름 : ";
	std::cin >> c_Name;

	std::cout << "전화번호 : ";
	std::cin >> i_Number;

	std::cout << "===========================" << std::endl;
	std::cout << "입력 받은 이름 : " << c_Name << std::endl;
	std::cout << "입력 받은 전화번호 : " << i_Number << std::endl;

	return 0;
}