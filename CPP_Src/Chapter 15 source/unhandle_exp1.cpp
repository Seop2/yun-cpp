/*
   unhandle_exp1.cpp   
*/
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int divide(int a, int b); // a/b�� �� ��ȯ

int main(void)
{
	int a, b;
	
	cout<<"�ΰ��� ���� �Է� : ";
	cin>>a>>b;
	cout<<"a/b�� �� : "<<divide(a, b)<<endl;

	return 0;
}

int divide(int a, int b)
{
	if(b==0)
		throw b;
	return a/b;
}