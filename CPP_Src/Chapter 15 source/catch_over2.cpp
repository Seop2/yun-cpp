/*
   catch_over2.cpp   
*/
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

char* account="1234-5678";  //���¹�ȣ
int sid=1122;    //��й�ȣ
int balance=1000;  //�ܾ�.

class AccountExpt
{
	char acc[10];
	int sid;
public:
	AccountExpt(char* str, int id){
		strcpy(acc, str);
		sid=id;
	}
	void What(){
		cout<<"���¹�ȣ: "<<acc<<endl;
		cout<<"��й�ȣ: "<<sid<<endl;
	}
};

int main(void)
{
	char acc[10];
	int id;
	int money;

	try{
		cout<<"���¹�ȣ �Է�: ";
		cin>>acc;
		cout<<"��й�ȣ 4�ڸ� �Է�: ";
		cin>>id;
		if(strcmp(account, acc) || sid!=id)
			throw AccountExpt(acc, id);
	}
	catch(AccountExpt& expt){
		cout<<"���� �Է��� �ٽ� �ѹ� Ȯ�� �ϼ���"<<endl;
		expt.What();
	}

	try{
		cout<<"��ݾ� �Է�: ";
		cin>>money;
		if(balance<money)
			throw money;
		
		balance-=money;
		cout<<"�ܾ�: "<<balance<<endl;
	}
	catch(int money){
		cout<<"���� �ݾ�: "<<money-balance<<endl;
	}
	return 0;
}
