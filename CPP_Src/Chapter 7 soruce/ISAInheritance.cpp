#include <iostream>
#include <cstring>
using namespace std;

class Computer
{
private:
	char owner[50];
public:	
	Computer(char * name)
	{
		strcpy(owner, name);
	}
	void Calculate() 
	{ 
		cout<<"��û ������ ����մϴ�."<<endl; 
	}
};

class NotebookComp : public Computer
{
private:
	int battary;
public:	
	NotebookComp(char * name, int initChag)
		: Computer(name), battary(initChag)
	{  }	
	void Charging() { battary+=5; }
	void UseBattary() { battary-=1; }
	void MovingCal()
	{
		if(GetBattaryInfo()<1)
		{
			cout<<"������ �ʿ��մϴ�."<<endl;
			return;
		}
	
		cout<<"�̵��ϸ鼭 ";
		Calculate();
		UseBattary();
	}
	int GetBattaryInfo() { return battary; }
};
	
class TabletNotebook : public NotebookComp
{
private:
	char regstPenModel[50];
public:		
	TabletNotebook(char * name, int initChag, char * pen)
		: NotebookComp(name, initChag)
	{
		strcpy(regstPenModel, pen);
	}
	void Write(char * penInfo)
	{
		if(GetBattaryInfo()<1)
		{
			cout<<"������ �ʿ��մϴ�."<<endl;
			return;
		}
		if(strcmp(regstPenModel, penInfo)!=0)
		{
			cout<<"��ϵ� ���� �ƴմϴ�.";
			return;
		}
		cout<<"�ʱ� ������ ó���մϴ�."<<endl;
		UseBattary();
	}
};

int main(void)
{
	NotebookComp nc("�̼���", 5);
	TabletNotebook tn("������", 5, "ISE-241-242");	
	nc.MovingCal();
	tn.Write("ISE-241-242");
	return 0;
}