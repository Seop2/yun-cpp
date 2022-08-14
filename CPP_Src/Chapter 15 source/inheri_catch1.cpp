/*
   inheri_catch1.cpp   
*/
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

class ExceptA
{
public:
	void What(){
		cout<<"ExceptA ����"<<endl;
	}
};

class ExceptB : public ExceptA
{
public:
	void What(){
		cout<<"ExceptB ����"<<endl;
	}
};

class ExceptC : public ExceptB
{
public:
	void What(){
		cout<<"ExceptC ����"<<endl;
	}
};

void ExcepFunction(int ex)
{
	if(ex==1)
		throw ExceptA();
	else if(ex==2)
		throw ExceptB();
	else
		throw ExceptC();
}

int main(void)
{

	int exID;
	cout<<"�߻���ų ������ ����: ";
	cin>>exID;

	try{
		ExcepFunction(exID);
	}
	catch(ExceptA& ex){
		cout<<"catch(ExceptA& ex)�� ���� ó��"<<endl;
		ex.What();
	}	
	catch(ExceptB& ex){
		cout<<"catch(ExceptB& ex)�� ���� ó��"<<endl;
		ex.What();
	}
	catch(ExceptC& ex){
		cout<<"catch(ExceptC& ex)�� ���� ó��"<<endl;
		ex.What();
	}

	return 0;
}