#include <iostream>
namespace BestComImpI
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}
namespace ProgComImpI
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
	}

}
int main()
{
	BestComImpI::SimpleFunc();//�������� ������ namespace ����
	ProgComImpI::SimpleFunc();
	return 0;
}