#include <iostream>
using namespace std;
namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}
int val = 100;
int SimpleFunc(void)
{
	int val = 20;
	val += 3;
	::val += 30;//�������������ڷ� �Լ��� ���������� �ƴ� ���������� ����
	cout << val << endl;
	cout << ::val << endl;
	return val;
}
int main()
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;//��Ī�� �ٿ��ش�
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;

	return 0;
}