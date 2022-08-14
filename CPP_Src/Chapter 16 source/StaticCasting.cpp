#include <iostream>
using namespace std;

class Car
{
private:
	int fuelGauge;		
public:
	Car(int fuel) : fuelGauge(fuel)
	{  }
	void ShowCarState()
	{
		cout<<"�ܿ� ���ᷮ: "<<fuelGauge<<endl;
	}
};

class Truck : public Car
{
private:
	int freightWeight;

public:
	Truck(int fuel, int weight)
		: Car(fuel), freightWeight(weight)
	{  }
	void ShowTruckState()
	{
		ShowCarState();
		cout<<"ȭ���� ����: "<<freightWeight<<endl;
	}
};

int main(void)
{
	Car * pcar1=new Truck(80, 200);
	Truck * ptruck1=static_cast<Truck*>(pcar1);     // ������ OK!
	ptruck1->ShowTruckState();
	cout<<endl;

	Car * pcar2=new Car(120);
	Truck * ptruck2=static_cast<Truck*>(pcar2);     // ������ OK! �׷���!
	ptruck2->ShowTruckState();
	return 0;
}