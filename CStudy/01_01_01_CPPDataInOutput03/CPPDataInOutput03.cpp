// 문제 3
// 숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해 보자.
// 예를 들어서 사용자가 5를 입력한다면 구구단에서 5단을 출력해야 한다.

#include <iostream>

int main()
{
	int i_Num;
	int i_Result;

	std::cout << "몇 단을 출력하시겠습니까 : ";
	std::cin >> i_Num;

	i_Result = 0;
	for (int i = 0; i < 9; i++)
	{
		i_Result = i_Num * (i + 1);
		std::cout << i_Num << " x " << i + 1 << " = " << i_Result << std::endl;
	}

	return 0;
}