#include <iostream>
using namespace std;
//�Ǹſ����� �ݿ���� ���α׷��� �ۼ��غ��� 
// �� ȸ��� ��� �Ǹſ����� �Ŵ� 50������ �⺻�޿��� ��ǰ�ǸŰ����� 12%�� �ش��ϴ� ���� �����Ѵ�.
//�Ǹ� �ݾ��� ���� ������ �Է�: 
//�̹� �� �޿�:
int main()
{
	int sales = 0;
	double pay = 0;
	while (true)
	{
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�:";
		cin >> sales;
		if (sales == -1)
		{
			cout << "���α׷��� �����մϴ�";
			break;
		}
		else
		{
			pay = 50 + sales * 0.12;
			cout << "�̹� �� �޿�: "<<pay<<"����"<< endl;
			

		}
	}

}