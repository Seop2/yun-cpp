#include <iostream>
int BoxVolume(int length, int width = 1, int height = 1);
int main()
{
	std::cout << "[3,3,3]: " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D]: " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D]: " << BoxVolume(7) << std::endl;
	//std::cout << "[D,D,D]: " << BoxVolume()<< std::endl; 매개변수(파라미터)가 없어서 컴파일 오류남
	return 0;
}

int BoxVolume(int length, int width, int height)
{

	return length*width*height;
}
