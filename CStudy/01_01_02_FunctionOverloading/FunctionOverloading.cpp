// 문제
// main 함수에서 필요로 하는 swap 함수를 오버로딩해서 구현해보자.

#include <iostream>

void swap(int* _iNum1, int* _iNum2)
{
	int i_Tmp = *_iNum1;
	*_iNum1 = *_iNum2;
	*_iNum2 = i_Tmp;
}

void swap(char* _cCh1, char* _cCh2)
{
	char c_Tmp = *_cCh1;
	*_cCh1 = *_cCh2;
	*_cCh2 = c_Tmp;
}

void swap(double* _dDbl1, double* _dDbl2)
{
	double d_Tmp = *_dDbl1;
	*_dDbl1 = *_dDbl2;
	*_dDbl2 = d_Tmp;
}

int main(void)
{
	int num1 = 20;
	int num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A';
	char ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1= 1.111;
	double dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;

	return 0;
}