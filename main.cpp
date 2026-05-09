#include "Chapter_13//Chapter_13_13/chapter_13.h"
#include <iostream>


/*
决定编译哪些cpp是构建系统的事情，而不是编译器的事情
头文件只是提供函数声明
*/
void test_make();

int main()
{
	ch_13_01::run();
	std::cout << "====================" << std::endl;
	ch_13_02::run();
	test_make();
	return 0;
}