#include <iostream>
using namespace std;
//���ڸ� �ϳ� �Է¹޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷��� �ۼ��غ���
int main()
{
	int n;
	cout << "����� ����ұ��?: ";
	cin >> n;
	for (int i = 1; i < 10; i++)
	{
		cout << n << " * " << i << " = " << n * i<<endl;
	}
	return 0;
}