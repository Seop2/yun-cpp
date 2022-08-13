#include <iostream>
using namespace std;
//숫자를 하나 입력받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해보자
int main()
{
	int n;
	cout << "몇단을 출력할까요?: ";
	cin >> n;
	for (int i = 1; i < 10; i++)
	{
		cout << n << " * " << i << " = " << n * i<<endl;
	}
	return 0;
}