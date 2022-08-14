#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//������°������α׷�
//1�ܰ迡���� c��Ÿ�Ϸ� ����
//1. ���°輳
//2. �� ��
//3. �� ��
//4. ��ü�� �ܾ���ȸ
//���¹�ȣ�� ����, �ߺ����� �ʴ´�
//�Ա� �� ��ݾ��� 0���� ũ��
//���� ���������� ���¹�ȣ, ���̸�, �����ܾ� �������� ���� �� �����Ѵ�.
//�� �̻��� ������������ ���ؼ� �迭�� ����Ѵ�.
//[���°���] 
//����ID: 115
//�̸�:�̿켮
//�Աݾ�:15000
void MakeAccount(void);    // ���°����� ���� �Լ�
void DepositMoney(void);       // ��    ��
void WithdrawMoney(void);      // ��    ��
void ShowAllAccInfo(void);     // �ܾ���ȸ
const int NAME_LEN = 20;
typedef struct
{
	int accID;      // ���¹�ȣ
	int balance;    // ��    ��
	char cusName[NAME_LEN];   // ���̸�
} Account;

Account accArr[100];   // Account ������ ���� �迭
int accNum = 0;        // ����� Account ��
using namespace std;
int main()
{
	

	int select;
	
	while (true)
	{
		cout << "------Menu-------" << endl;
		cout << "1. ���°���" << endl;
		cout << "2. �� ��" << endl;
		cout << "3. �� ��" << endl;
		cout << "4. �������� ��ü ���" << endl;
		cout << "5. ���α׷� ����" << endl;
		cout << "����:";
		cin >> select;
		if (select == 1)
		{
			MakeAccount();
		}
		else if (select == 2)
		{
			cout << "�Աݽ���!" << endl;
			DepositMoney();
		}
		else if (select == 3)
		{
			cout << "��ݽ���!" << endl;
			WithdrawMoney();

		}
		else if (select == 4)
		{
			cout << "��ü���¸� ����մϴ�." << endl;
			ShowAllAccInfo();
		}
		else if (select == 5)
		{
			cout << "���α׷� ����" << endl;
			break;
		}
	
	}
	return 0;
}
void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[���°���]" << endl;
	cout << "����ID: ";	cin >> id;
	cout << "��  ��: ";	cin >> name;
	cout << "�Աݾ�: ";	cin >> balance;
	cout << endl;

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy(accArr[accNum].cusName, name);
	accNum++;
}
void DepositMoney(void)
{
	int money;
	int id;
	cout << "[��    ��]" << endl;
	cout << "����ID: ";	cin >> id;
	cout << "�Աݾ�: ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			accArr[i].balance += money;
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}
void WithdrawMoney(void)
{
	int money;
	int id;
	cout << "[��    ��]" << endl;
	cout << "����ID: ";	cin >> id;
	cout << "��ݾ�: ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			if (accArr[i].balance < money)
			{
				cout << "�ܾ׺���" << endl << endl;
				return;
			}

			accArr[i].balance -= money;
			cout << "��ݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}
void ShowAllAccInfo(void)
{
	for (int i = 0; i < accNum; i++)
	{
		cout << "����ID: " << accArr[i].accID << endl;
		cout << "��  ��: " << accArr[i].cusName << endl;
		cout << "��  ��: " << accArr[i].balance << endl << endl;
	}
}