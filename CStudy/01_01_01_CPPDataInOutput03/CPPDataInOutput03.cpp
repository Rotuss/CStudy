// ���� 3
// ���ڸ� �ϳ� �Է� �޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷��� �ۼ��� ����.
// ���� �� ����ڰ� 5�� �Է��Ѵٸ� �����ܿ��� 5���� ����ؾ� �Ѵ�.

#include <iostream>

int main()
{
	int i_Num;
	int i_Result;

	std::cout << "�� ���� ����Ͻðڽ��ϱ� : ";
	std::cin >> i_Num;

	i_Result = 0;
	for (int i = 0; i < 9; i++)
	{
		i_Result = i_Num * (i + 1);
		std::cout << i_Num << " x " << i + 1 << " = " << i_Result << std::endl;
	}

	return 0;
}