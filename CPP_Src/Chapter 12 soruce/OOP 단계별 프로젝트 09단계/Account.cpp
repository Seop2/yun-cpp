/*
 * �����̸�: Account.cpp
 * �ۼ���: ������
 * ������Ʈ ����: [2010, 03, 01] ���Ϲ��� 0.9 
 */

#include "BankingCommonDecl.h"
#include "Account.h"

Account::Account(int ID, int money, String name)
	: accID(ID), balance(money)
{
	// cusName=new char[strlen(name)+1];
	// strcpy(cusName, name);
	cusName=name;
}

// Account::Account(const Account & ref) {....}
// Account& Account::operator=(const Account& ref) {....}

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

// Account::~Account() {....}	