/*
 * 파일이름: AccountHandler.h
 * 작성자: 윤성우
 * 업데이트 정보: [2010, 01, 01] 파일버전 0.7 
 */

#ifndef __ACCOUN_HANDLER_H__
#define __ACCOUN_HANDLER_H__

#include "Account.h"

class AccountHandler
{
private:
	Account * accArr[100];
	int accNum;
public:
	AccountHandler();
	void ShowMenu(void) const;
	void MakeAccount(void);
	void DepositMoney(void);
	void WithdrawMoney(void);
	void ShowAllAccInfo(void) const;
	~AccountHandler();
protected:
	void MakeNormalAccount(void);
	void MakeCreditAccount(void);
};
#endif