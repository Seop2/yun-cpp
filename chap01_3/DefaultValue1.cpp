#include <iostream>
int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}
int main()
{
	std::cout << Adder() << std::endl;//3
	std::cout << Adder(5) << std::endl;//7(num1 = 5로 들어가고 num2가 기본값인 2로 들어가서 두 매개변수의 합을 리턴
	std::cout << Adder(3,5) << std::endl;//8

	return 0;
}