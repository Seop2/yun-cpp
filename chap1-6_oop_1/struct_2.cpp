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
	
	strcpy(yuni.name, "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);//자기소개를 저장할 공간 동적 할당
	printf("자기소개: ");
	gets_s(yuni.intro, 20);

	printf("이름:%s\n", yuni.name);
	printf("나이:%d\n", yuni.age);
	printf("키:%.1lf\n", yuni.height);
	printf("자기소개:%s\n", yuni.intro);
	free(yuni.intro);//동작할당영역반환
	return 0;
}