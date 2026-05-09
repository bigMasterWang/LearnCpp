#include "Chapter_13/Chapter_13_13/chapter_13.h"
#include <iostream>






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


namespace ch_13_02 {
	void run()
	{
		Pair<int, double> p1{ 1,2.3 };
		print(p1);
	}
}