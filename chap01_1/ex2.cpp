#include <iostream>
using namespace std;
//프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력받아서, 입력받은 데이터를 그래로 출력하는 프로그램을 작성해보자
int main()
{
	string name, phone;
	cout << "이름: ";
	cin >> name;
	cout << "전화번호: ";
	cin >> phone;
	cout << name << endl;
	cout << phone << endl;
	return 0;
}