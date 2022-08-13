#include <iostream>
using namespace std;
void swap(int *ptr_a, int *ptr_b)//*ptr_a = &num1;
{
	int temp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = temp;
}
void swap(char* ptr_a, char* ptr_b)
{
	char temp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = temp;
}
void swap(double* ptr_a, double* ptr_b)
{
	double temp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = temp;
}

int main()
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);//&가 나와서......-> 포인터 생각!
	cout << num1 << ' ' << num2 << endl;

	char nu1 = 'A', nu2 = 'Z';
	swap(&nu1, &nu2);
	cout << nu1 << ' ' << nu2 << endl;

	double m1 = 1.111, m2 = 5.555;
	swap(&m1, &m2);
	cout << m1 << ' ' << m2 << endl;
	return 0;
}