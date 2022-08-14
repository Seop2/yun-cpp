/*
 * �����̸�: Account.cpp
 * �ۼ���: ������
 * ������Ʈ ����: [2010, 09, 01] ���Ϲ��� 0.92
 */

#include "BankingCommonDecl.h"
#include "Account.h"
#include "AccountException.h"

Account::Account(int ID, int money, String name)
	: accID(ID), balance(money)
{
	cusName=name;
}

int Account::GetAccID() const { return accID; }

void Account::Deposit(int money)
{
	if(money<0)
		throw MinusException(money);

	balance+=money;
}

int Account::Withdraw(int money)
{
	if(money<0)
		throw MinusException(money);

	if(balance<money)
		throw InsuffException(balance, money);
	
	balance-=money;
	return money;
}

void Account::ShowAccInfo() const 
{
	cout<<"����ID: "<<accID<<endl;
	cout<<"��  ��: "<<cusName<<endl;
	cout<<"��  ��: "<<balance<<endl;
}