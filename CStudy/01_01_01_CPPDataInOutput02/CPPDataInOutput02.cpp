// ���� 2
// ���α׷� ����ڷκ��� �̸��� ��ȭ��ȣ�� ���ڿ��� ���·� �Է� �޾Ƽ�,
// �Է� ���� �����͸� �״�� ����ϴ� ���α׷��� �ۼ��� ����.

#include <iostream>

int main()
{
	char c_Name[100];
	int i_Number;

	std::cout << "�̸� : ";
	std::cin >> c_Name;

	std::cout << "��ȭ��ȣ : ";
	std::cin >> i_Number;

	std::cout << "===========================" << std::endl;
	std::cout << "�Է� ���� �̸� : " << c_Name << std::endl;
	std::cout << "�Է� ���� ��ȭ��ȣ : " << i_Number << std::endl;

	return 0;
}