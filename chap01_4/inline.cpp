#include <iostream>
//�ζ����Լ�
// ������ �Լ��� ���� ��������!
//��ũ���Լ��� ����: �Ϲ����� �Լ��� ���ؼ� ����ӵ��� ������ �ִ�.
//��ũ���Լ��� ����: �����ϱⰡ ��ƴ�. ������ �Լ��� ��ũ���� ���·� �����ϴµ� �Ѱ谡 �ִ�.
inline int SQUARE(int x)//�ζ����Լ��� ���� = �Լ��� �ζ���ȭ by �����Ϸ�
{
	return x * x;
}
int sum(int x, int y)
{
	return x + y;
}
int main()
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	std::cout << sum(12,24) << std::endl;
	return 0;
}