// ���� 1
// ���� DefaultValue3.cpp�� ���ǵ� �Լ� BoxVolume�� '�Ű������� ����Ʈ �� ����' ���°� �ƴ�.
// '�Լ� �����ε�'�� ���·� �籸���غ���.
// ���� main �Լ��� �������� �ʾƾ� �ϸ�,
// �������� �����ؾ� �Ѵ�.

#include <iostream>

// �Ű������� ����Ʈ �� ����
// int BoxVolume(int length, int width = 1, int height = 1);

// �Լ� �����ε�
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

// �Ű������� ����Ʈ �� ����
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
