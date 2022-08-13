#include <iostream>
using namespace std;
//다음과 같은 형태로의 함수 오버로딩은 문제가 있다 어떠한 문제가 있는가?
int SimpleFunc(int a)
{
	return 10;//리턴값이 다른것은 오버로딩을 할수 없다 매개변수만 고려해야 오버로딩이 가능하다
}
int SimpleFunc(void)
{
	return 10;
}

//int function()//반환하는 자료형의 형태가 다르기때문에 오버로딩이 성립되지않고 컴파일 오류가 발생한다,
//{
//	return 10;
//}
int main()
{
	
	SimpleFunc();//파라미터가 없는 함수를 호출하려했지만 컴파일 오류가 남

	return 0;
}
///오버로딩
//함수 호출시 전달되는 인자를 통해서 호출하고자 하는 함수의 구분이 가능하기때문에
//매개변수의 선언형태가 다르다면 동일한 이름의 함수의 정의를 허용할 수 있다.
//선언형태가 다르다? => 자료형이 다르거나, 매개변수의 갯수가 다르거나
//잘못된 오버로딩의 예 void function(int n){}int function(int n){} 이 경우 두 함수는 컴파일 오류가 난다.
