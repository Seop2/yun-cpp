#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
class Point 
{
private:
	T xpos, ypos;
public:
	Point(T x=0, T y=0): xpos(x), ypos(y)
	{  }
	void ShowPosition() const
	{
		cout<<'['<<xpos<<", "<<ypos<<']'<<endl; 
	}
};

template <typename T>
class SimpleDataWrapper 
{
private:
	T mdata;
public:
	SimpleDataWrapper(T data) : mdata(data)
	{ }
	void ShowDataInfo(void)
	{
		cout<<"Data: "<<mdata<<endl;
	}
};

template<>
class SimpleDataWrapper <char*>
{
private:
	char* mdata;
public:
	SimpleDataWrapper(char* data)
	{
		mdata=new char[strlen(data)+1];
		strcpy(mdata, data);
	}
	void ShowDataInfo(void)
	{
		cout<<"String: "<<mdata<<endl;
		cout<<"Length: "<<strlen(mdata)<<endl;
	}
	~SimpleDataWrapper()
	{
		delete []mdata;
	}
};

template<>
class SimpleDataWrapper <Point<int>>
{
private:
	Point<int> mdata;
public:
	SimpleDataWrapper(int x, int y) : mdata(x, y)
	{ }
	void ShowDataInfo(void)
	{
		mdata.ShowPosition();
	}
};

int main(void)
{	
	SimpleDataWrapper<int> iwrap(170);
	iwrap.ShowDataInfo();

	SimpleDataWrapper<char*> swrap("Class Template Specialization");
	swrap.ShowDataInfo();

	SimpleDataWrapper<Point<int>> poswrap(3, 7);
	poswrap.ShowDataInfo();
	return 0;
}
