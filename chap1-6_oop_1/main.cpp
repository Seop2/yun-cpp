#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//은행계좌관리프로그램
//1단계에서는 c스타일로 구현
//1. 계좌계설
//2. 입 금
//3. 출 금
//4. 전체고객 잔액조회
//계좌번호는 정수, 중복되지 않는다
//입금 및 출금액은 0보다 크다
//고객의 계좌정보는 계좌번호, 고객이름, 고객의잔액 세가지만 저장 및 관리한다.
//둘 이상의 고객정보저장을 위해서 배열을 사용한다.
//[계좌개설] 
//계좌ID: 115
//이름:이우석
//입금액:15000
void MakeAccount(void);    // 계좌개설을 위한 함수
void DepositMoney(void);       // 입    금
void WithdrawMoney(void);      // 출    금
void ShowAllAccInfo(void);     // 잔액조회
const int NAME_LEN = 20;
typedef struct
{
	int accID;      // 계좌번호
	int balance;    // 잔    액
	char cusName[NAME_LEN];   // 고객이름
} Account;

Account accArr[100];   // Account 저장을 위한 배열
int accNum = 0;        // 저장된 Account 수
using namespace std;
int main()
{
	

	int select;
	
	while (true)
	{
		cout << "------Menu-------" << endl;
		cout << "1. 계좌개설" << endl;
		cout << "2. 입 금" << endl;
		cout << "3. 출 금" << endl;
		cout << "4. 계좌정보 전체 출력" << endl;
		cout << "5. 프로그램 종료" << endl;
		cout << "선택:";
		cin >> select;
		if (select == 1)
		{
			MakeAccount();
		}
		else if (select == 2)
		{
			cout << "입금시작!" << endl;
			DepositMoney();
		}
		else if (select == 3)
		{
			cout << "출금시작!" << endl;
			WithdrawMoney();

		}
		else if (select == 4)
		{
			cout << "전체계좌를 출력합니다." << endl;
			ShowAllAccInfo();
		}
		else if (select == 5)
		{
			cout << "프로그램 종료" << endl;
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

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "이  름: ";	cin >> name;
	cout << "입금액: ";	cin >> balance;
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
	cout << "[입    금]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "입금액: ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			accArr[i].balance += money;
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}
void WithdrawMoney(void)
{
	int money;
	int id;
	cout << "[출    금]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "출금액: ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			if (accArr[i].balance < money)
			{
				cout << "잔액부족" << endl << endl;
				return;
			}

			accArr[i].balance -= money;
			cout << "출금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}
void ShowAllAccInfo(void)
{
	for (int i = 0; i < accNum; i++)
	{
		cout << "계좌ID: " << accArr[i].accID << endl;
		cout << "이  름: " << accArr[i].cusName << endl;
		cout << "잔  액: " << accArr[i].balance << endl << endl;
	}
}