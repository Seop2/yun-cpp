/*
 * �����̸�: AccountException.h
 * �ۼ���: ������
 * ������Ʈ ����: [2010, 09, 01] ���Ϲ��� 0.12 
 */

#ifndef __ACCOUNT_EXCEPTION_H__
#define __ACCOUNT_EXCEPTION_H__

class MinusException
{
private:
	int exval;    // ������ ������ �Ǵ� �ݾ�

public:
	MinusException(int val) : exval(val)
	{  }

	void ShowExceptionInfo(void) const 
	{
		cout<<"��(��)�ݾ� "<<exval<<"�� ��ȿ���� �ʽ��ϴ�!"<<endl;
	}
};

class InsuffException
{
private:
	int balance;     // ���� �ܾ�
	int reqval;      // ��� �䱸��
public:
	InsuffException(int val, int req)
		: balance(val), reqval(req)
	{  }
	
	void ShowExceptionInfo() const
	{
		cout<<"�ܾ׿��� "<<reqval-balance<<"��(��) �����մϴ�!"<<endl;
	}
};

#endif