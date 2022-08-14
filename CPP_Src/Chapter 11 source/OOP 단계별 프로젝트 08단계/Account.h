/*
 * 파일이름: Account.h
 * 작성자: 윤성우
 * 업데이트 정보: [2010, 02, 01] 파일버전 0.8 
 */

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account
{
private:
	int accID; 
	int balance;    
	char * cusName; 
public:
	Account(int ID, int money, char * name);
	Account(const Account & ref);
	Account& operator=(const Account& ref);

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money) ;
	void ShowAccInfo() const ;
	~Account();
};
#endif