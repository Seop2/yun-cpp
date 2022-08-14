/*
 * �����̸�: Account.cpp
 * �ۼ���: ������
 * ������Ʈ ����: [2010, 02, 01] ���Ϲ��� 0.8 
 */

#include "BankingCommonDecl.h"
#include "Account.h"

Account::Account(int ID, int money, char * name)
	: accID(ID), balance(money)
{
	cusName=new char[strlen(name)+1];
	strcpy(cusName, name);
}

Account::Account(const Account & ref)
	: accID(ref.accID), balance(ref.balance)
{
	cusName=new char[strlen(ref.cusName)+1];
	strcpy(cusName, ref.cusName);
}

Account& Account::operator=(const Account& ref)
{	
	accID=ref.accID;
	balance=ref.balance;

	delete []cusName;
	cusName=new char[strlen(ref.cusName)+1];
	strcpy(cusName, ref.cusName);
	return *this;
}

int Account::GetAccID() const { return accID; }

void Account::Deposit(int money)
{
	balance+=money;
}

int Account::Withdraw(int money)
{
	if(balance<money)
		return 0;
	
	balance-=money;
	return money;
}

void Account::ShowAccInfo() const 
{
	cout<<"����ID: "<<accID<<endl;
	cout<<"��  ��: "<<cusName<<endl;
	cout<<"��  ��: "<<balance<<endl;
}

Account::~Account()
{
	delete []cusName;
}	