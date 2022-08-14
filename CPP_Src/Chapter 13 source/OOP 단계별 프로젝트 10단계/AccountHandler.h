/*
 * �����̸�: AccountHandler.h
 * �ۼ���: ������
 * ������Ʈ ����: [2010, 04, 01] ���Ϲ��� 0.9
 */

#ifndef __ACCOUN_HANDLER_H__
#define __ACCOUN_HANDLER_H__

#include "Account.h"
#include "BoundCheckArray.h"

class AccountHandler
{
private:
	BoundCheckArray<Account*> accArr;
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