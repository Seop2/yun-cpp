#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct Person
{
	char name[20];
	int age;
	char address[100];

};
int main()
{
	struct Person p1;
	strcpy(p1.name,"ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "����� ��걸 �ѳ���");
	printf("�̸�: %s\n", p1.name);       // �̸�: ȫ�浿
	printf("����: %d\n", p1.age);        // ����: 30
	printf("�ּ�: %s\n", p1.address);    // �ּ�: ����� ��걸 �ѳ���


	struct Person p2 = { "��浿", 40, "����� ���ʱ� ������" };
	printf("�̸�: %s\n", p2.name);       // �̸�: ��浿
	printf("����: %d\n", p2.age);        // ����: 40
	printf("�ּ�: %s\n", p2.address);    // �ּ�: ����� ���ʱ� ������
	return 0;
}