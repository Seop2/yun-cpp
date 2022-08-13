#include <iostream>
using namespace std;
//판매원들의 금여계산 프로그램을 작성해보자 
// 이 회사는 모든 판매원에게 매달 50만원의 기본급여와 물품판매가격의 12%에 해당하는 돈을 지급한다.
//판매 금액을 만원 단위로 입력: 
//이번 달 급여:
int main()
{
	int sales = 0;
	double pay = 0;
	while (true)
	{
		cout << "판매 금액을 만원 단위로 입력:";
		cin >> sales;
		if (sales == -1)
		{
			cout << "프로그램을 종료합니다";
			break;
		}
		else
		{
			pay = 50 + sales * 0.12;
			cout << "이번 달 급여: "<<pay<<"만원"<< endl;
			

		}
	}

}