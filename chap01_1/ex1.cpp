#include <iostream>
using namespace std;
//5���� ������ �Է¹޾Ƽ�, �� ���� ����ϴ�  ���α׷���  �ۼ��غ���
int main()
{
	int n, sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << i << "��° ���� �Է�: ";
		cin >> n;
		sum += n;
	}
	cout << "�հ�: " << sum << endl;
	return 0;
}