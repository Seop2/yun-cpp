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
	::val += 30;//범위지정연산자로 함수내 지역변수가 아닌 전역변수에 접근
	cout << val << endl;
	cout << ::val << endl;
	return val;
}
int main()
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;//별칭을 붙여준다
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;

	return 0;
}