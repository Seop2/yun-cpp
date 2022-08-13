#include <iostream>
//예제 Defalutvalue.cpp에 정의된 함수  BoxVolume를  '매개변수의 디폴트값 지정'형태가 아닌,'함수 오버로딩'의 형태로 재 구현해보자
double BoxVolume(double length, double width, double height);
int BoxVolume(int length, int width, int height);
int main()
{
	std::cout << "[3,3,3]: " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,1]: " << BoxVolume(5, 5,1) << std::endl;
	std::cout << "[7.8,1.0,3.4]: " << BoxVolume(7.8,1.0,3.4) << std::endl;
	//std::cout << "[D,D,D]: " << BoxVolume()<< std::endl; 매개변수(파라미터)가 없어서 컴파일 오류남
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
