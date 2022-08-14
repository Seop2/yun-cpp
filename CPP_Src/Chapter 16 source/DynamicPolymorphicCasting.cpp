#include <iostream>
using namespace std;

class AAA
{
public:
	virtual void ShowSimple()
	{
		cout<<"AAA"<<endl;
	}
};

class BBB: public AAA
{
public:
	void ShowSimple()
	{
		cout<<"BBB"<<endl;
	}
};

int main(void)
{
	AAA * ptr1 = new BBB;

	BBB * ptr2 = dynamic_cast<BBB*>(ptr1);

	return 0;
}