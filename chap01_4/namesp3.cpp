#include <iostream>
namespace BestComImpl
{
	void SimpleFunc(void);
}
namespace BestComImpl
{
	void PrettyFunc(void);//namespace�� ���Ƽ� ���� �������� ��޹޴´�
}
namespace ProgComImpl
{
	void SimpleFunc(void);
}
int main()
{
	BestComImpl::SimpleFunc();
	return 0;
}
void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc();//���� �̸�����
	ProgComImpl::SimpleFunc();//�ٸ� �̸�����
}
void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pretty!!" << std::endl;
}
void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}