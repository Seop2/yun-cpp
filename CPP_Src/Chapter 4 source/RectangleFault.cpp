#include<iostream>
using namespace std;

class Point
{
public:
	int x;   // x��ǥ�� ������ 0�̻� 100����.
	int y;   // y��ǥ�� ������ 0�̻� 100����.
};

class Rectangle
{
public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo()
	{
		cout<<"�� ���: "<<'['<<upLeft.x<<", ";
		cout<<upLeft.y<<']'<<endl;
		cout<<"�� �ϴ�: "<<'['<<lowRight.x<<", ";
		cout<<lowRight.y<<']'<<endl<<endl;
	}
};

int main(void)
{
	Point pos1={-2, 4};
	Point pos2={5, 9};
	Rectangle rec={pos2, pos1};
	rec.ShowRecInfo();
	return 0;
}
