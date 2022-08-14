#include <stdio.h>
struct student
{
	int num;
	double grade;
};//struct 예약어를 사용하여 구조체 선언 마지막에 세미클론 
int main(void)
{
	struct student s1;//구조체 변수 선언
	s1.num = 2;
	s1.grade = 3.5;
	printf("학번:%d\n", s1.num);
	printf("학점:%.1f\n", s1.grade);
	return 0;
}