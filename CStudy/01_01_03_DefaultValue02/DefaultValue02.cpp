// ���� 2
// ������ ���� ���·��� �Լ� �����ε��� ������ �ִ�.
// ��� ������ �ִ��� �����غ���.

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
	//SimpleFunc(); // �Լ��� ȣ������ �� �����ε� �Լ� �� � �Լ��� ȣ���ϰ��� �ϴ� ������ �� ���� ����.
	return 0;
}