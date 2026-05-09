#include "Chapter_13/Chapter_13_13/chapter_13.h"
#include <iostream>
#include <utility>






template <typename T, typename U>
struct Pair
{
	T a{};
	U b{};
};


template <typename T, typename U>
void print(Pair<T, U>& p)
{
	std::cout << "[ " << p.a << " , " << p.b << " ]" << std::endl;
}


template <typename T, typename U>
struct Pair2
{
	T a{};
	U b{};
};


struct Point
{
	int a{};
	int b{};
};


template <typename T>
void print2(T& p)
{
	std::cout << "[ " << p.a << " , " << p.b << " ]" << std::endl;
}



template <typename T, typename U>
void print3(std::pair<T, U>& p)
{
	std::cout << "[ " << p.first << " , " << p.second << " ]" << std::endl;
}

void test_make()
{
	std::cout << "hello test_make" << std::endl;
}

namespace ch_13_02 {
	void run()
	{
		Pair<int, double> p1{ 1,2.3 };
		print(p1);

		Pair2<int, double> p2{ 3,4.5 };
		Point p3{ 6,7 };
		print2(p2);
		print2(p3);

		std::pair<int, double> p4{ 8,9.0 };	
		std::pair<float, double> p5{ 10.1f, 11.2 };
		std::pair<std::string, std::string> p6{ "hello", "world" };	
		print3(p4);
		print3(p5);
		print3(p6);
	}
}