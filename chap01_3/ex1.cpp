#include <iostream>
//���� Defalutvalue.cpp�� ���ǵ� �Լ�  BoxVolume��  '�Ű������� ����Ʈ�� ����'���°� �ƴ�,'�Լ� �����ε�'�� ���·� �� �����غ���
double BoxVolume(double length, double width, double height);
int BoxVolume(int length, int width, int height);
int main()
{
	std::cout << "[3,3,3]: " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,1]: " << BoxVolume(5, 5,1) << std::endl;
	std::cout << "[7.8,1.0,3.4]: " << BoxVolume(7.8,1.0,3.4) << std::endl;
	//std::cout << "[D,D,D]: " << BoxVolume()<< std::endl; �Ű�����(�Ķ����)�� ��� ������ ������
	return 0;
}

int BoxVolume(int length, int width, int height)
{

	return length * width * height;
}
double BoxVolume(double length, double width, double height)
{

	return length * width * height;
}
