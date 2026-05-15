#include <iostream>
#include "Chapter_13/Chapter_13_13/chapter_13_13.h"


int max(int x, int y)
{
	return (x < y) ? y : x;
}

double max(double x, double y)
{
	return (x < y) ? y : x;
}


template <typename T>
T template_max(T x, T y)
{
	return (x < y) ? y : x;
}

struct Pair
{
	int a{};
	int b{};
};

constexpr int max(Pair& p)
{
	return (p.a < p.b) ? p.b : p.a;
}

template <typename T>
struct template_pair
{
	T a{};
	T b{};
};

template <>
struct template_pair<double>
{
	double a{};
	double b{};
};

template <typename T>
constexpr T template_max_2(template_pair<T>& p)
{
	return (p.a < p.b) ? p.b : p.a;
};

namespace ch_13_13_01 {
void run()
{
	std::cout << max(1, 2) << std::endl;
	std::cout<< max(1.2, 2.3) << std::endl;
	std::cout << "====================" << std::endl;
	std::cout << template_max(1, 2) << std::endl;
	std::cout << template_max(1.2, 2.3) << std::endl;
	std::cout << "====================" << std::endl;
	Pair p{1, 2 };
	std::cout << max(p) << std::endl;
	std::cout << "====================" << std::endl;
	template_pair<int> ip{ 1, 2 };
	template_pair<double> dp{ 1.2, 2.3 };
	std::cout << template_max_2<int>(ip) << std::endl;
	std::cout << template_max_2<double>(dp) << std::endl;
}
}