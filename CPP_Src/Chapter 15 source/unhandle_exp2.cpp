/*
   unhandle_exp2.cpp   
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
	try{
		cout<<"a/b�� �� : "<<divide(a, b)<<endl;
	}
	catch(char exception){
		cout<<exception<<" �Է�."<<endl; 
		cout<<"�Է¿���! �ٽ� ���� �ϼ���."<<endl;
	}

	return 0;
}

int divide(int a, int b)
{
	if(b==0)
		throw b;
	return a/b;
}
