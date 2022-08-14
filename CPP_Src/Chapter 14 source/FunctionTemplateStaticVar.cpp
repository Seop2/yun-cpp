#include <iostream>
using namespace std;

template <typename T>
void ShowStaticValue(void)
{
	static T num=0;
	num+=1;
	cout<<num<<" ";
}

int main(void)
{
	ShowStaticValue<int>();
	ShowStaticValue<int>();
	ShowStaticValue<int>();
	cout<<endl;

	ShowStaticValue<long>();
	ShowStaticValue<long>();
	ShowStaticValue<long>();
	cout<<endl;

	ShowStaticValue<double>();
	ShowStaticValue<double>();
	ShowStaticValue<double>();
	return 0;
}
