/*
   OOhandlingflow.cpp   
*/
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

int main(void)
{
	int a, b;
	
	cout<<"�ΰ��� ���� �Է� : ";
	cin>>a>>b;

	try{
		cout<<"try block start"<<endl;

		if(b==0)
			throw b;
		cout<<"a/b�� �� : "<<a/b<<endl;
		cout<<"a/b�� ������ : "<<a%b<<endl;

		cout<<"try block end"<<endl;
	}
	catch(int exception){
		cout<<"catch block start"<<endl;

		cout<<exception<<" �Է�."<<endl; 
		cout<<"�Է¿���! �ٽ� ���� �ϼ���."<<endl;
	}

	cout<<"THANK YOU!"<<endl;

	return 0;
}