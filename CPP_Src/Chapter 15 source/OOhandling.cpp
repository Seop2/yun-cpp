/*
   OOhandling.cpp   
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
		if(b==0)
			throw b;
		cout<<"a/b�� �� : "<<a/b<<endl;
		cout<<"a/b�� ������ : "<<a%b<<endl;
	}
	catch(int exception){
		cout<<exception<<" �Է�."<<endl; 
		cout<<"�Է¿���! �ٽ� ���� �ϼ���."<<endl;
	}

	return 0;
}