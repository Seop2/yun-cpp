/*
 * 파일이름: Account.cpp
 * 작성자: 윤성우
 * 업데이트 정보: [2010, 02, 01] 파일버전 0.8 
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
	cout<<"계좌ID: "<<accID<<endl;
	cout<<"이  름: "<<cusName<<endl;
	cout<<"잔  액: "<<balance<<endl;
}

Account::~Account()
{
	delete []cusName;
}	