#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;

};
int main(void)
{
	struct profile yuni;
	
	strcpy(yuni.name, "������");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);//�ڱ�Ұ��� ������ ���� ���� �Ҵ�
	printf("�ڱ�Ұ�: ");
	gets_s(yuni.intro, 20);

	printf("�̸�:%s\n", yuni.name);
	printf("����:%d\n", yuni.age);
	printf("Ű:%.1lf\n", yuni.height);
	printf("�ڱ�Ұ�:%s\n", yuni.intro);
	free(yuni.intro);//�����Ҵ翵����ȯ
	return 0;
}