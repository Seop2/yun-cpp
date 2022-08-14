/*
 * �����̸�: HighCreditAccount.h
 * �ۼ���: ������
 * ������Ʈ ����: [2010, 01, 01] ���Ϲ��� 0.7 
 */

#ifndef __HIGHCREDIT_ACCOUNT_H__
#define __HIGHCREDIT_ACCOUNT_H__

#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount
{
private:
	int specialRate;
public:
	HighCreditAccount(int ID, int money, char * name, int rate, int special)
		: NormalAccount(ID, money, name, rate), specialRate(special)
	{  }	
	virtual void Deposit(int money)
	{
		NormalAccount::Deposit(money);        // ���ݰ� �����߰� 
		Account::Deposit(money*(specialRate/100.0));   // Ư�������߰�
	}
};
#endif