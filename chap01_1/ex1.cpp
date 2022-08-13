#include <iostream>
using namespace std;
//5개의 정수를 입력받아서, 그 합을 출력하는  프로그램을  작성해보자
int main()
{
	int n, sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << i << "번째 정수 입력: ";
		cin >> n;
		sum += n;
	}
	cout << "합계: " << sum << endl;
	return 0;
}