#include <iostream>
using namespace std;

int main(void)
{
	int num1, num2;
	cout<<"�� ���� ���� �Է�: ";
	cin>>num1>>num2;

	try
	{
		if(num2==0)
			throw num2;

		cout<<"�������� ��: "<< num1/num2 <<endl;
		cout<<"�������� ������: "<< num1%num2 <<endl;
	}
	catch(int expn)
	{
		cout<<"������ "<<expn<<"�� �� �� �����ϴ�."<<endl;
		cout<<"���α׷��� �ٽ� �����ϼ���."<<endl;
	}
	cout<<"end of main"<<endl;
	return 0;
}