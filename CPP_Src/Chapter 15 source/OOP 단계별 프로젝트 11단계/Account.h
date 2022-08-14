/*
 * 파일이름: Account.h
 * 작성자: 윤성우
 * 업데이트 정보: [2010, 09, 01] 파일버전 0.92
 */

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "String.h"

class Account
{
private:
	int accID; 
	int balance;    
	String cusName; // char * cusName;
public:
	Account(int ID, int money, String name);
	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money) ;
	void ShowAccInfo() const ;
};
#endif