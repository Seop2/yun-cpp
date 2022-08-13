//헤더파일의 의미와 정의방법
//헤더파일에 삽입할 내용과 소스파일에 삽입할 내용을 구분하는 방법
//둘 이상의 헤더파일과 소스파일을 만들어서 하나의 실행파일로  컴파일하는방법
//NameSp2.cpp를 다음과 같이 총 3개의 파일로 분할해서 컴파일해보자
//헤더파일  main함수를 제외한 나머지 두 함수의 선언을 삽입한다.
//소스파일1 main함수를 제외한 나머지 두 함수의 정의를 삽입한다.
//소스파일2 main함수만
#include <iostream>
#include "Simple.h"
int main()
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}