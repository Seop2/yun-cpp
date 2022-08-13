#include <iostream>
//인라인함수
// 복잡한 함수를 쉽게 정의하자!
//매크로함수의 장점: 일반적인 함수에 비해서 실행속도의 이점이 있다.
//매크로함수의 딘점: 정의하기가 어렵다. 복잡한 함수를 매크로의 형태로 정의하는데 한계가 있다.
inline int SQUARE(int x)//인라인함수의 정의 = 함수의 인라인화 by 컴파일러
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