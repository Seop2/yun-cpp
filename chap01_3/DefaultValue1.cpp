#include <iostream>
int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}
int main()
{
	std::cout << Adder() << std::endl;//3
	std::cout << Adder(5) << std::endl;//7(num1 = 5�� ���� num2�� �⺻���� 2�� ���� �� �Ű������� ���� ����
	std::cout << Adder(3,5) << std::endl;//8

	return 0;
}