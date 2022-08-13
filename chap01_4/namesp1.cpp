#include <iostream>
namespace BestComImpI
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}
namespace ProgComImpI
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}

}
int main()
{
	BestComImpI::SimpleFunc();//범위지정 연산자 namespace 지정
	ProgComImpI::SimpleFunc();
	return 0;
}