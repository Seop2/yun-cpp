#include <stdio.h>
struct student
{
	int num;
	double grade;
};//struct ���� ����Ͽ� ����ü ���� �������� ����Ŭ�� 
int main(void)
{
	struct student s1;//����ü ���� ����
	s1.num = 2;
	s1.grade = 3.5;
	printf("�й�:%d\n", s1.num);
	printf("����:%.1f\n", s1.grade);
	return 0;
}