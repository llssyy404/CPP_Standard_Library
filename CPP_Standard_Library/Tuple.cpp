//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 2장. 편의 수단 라이브러리
//-------------------------------------------------------
//
// <tuple>
// std::tuple
//-------------------------------------------------------

#include <iostream>
#include <string>
#include <tuple>

int main()
{
	std::tuple<std::string, int, float> tup1("first", 3, 4.17f);
	auto tup2 = std::make_tuple("second", 4, 1.1);

	std::cout << std::get<0>(tup1) << ", " << std::get<1>(tup1) << ", "
		<< std::get<2>(tup1) << std::endl; // first, 3, 4.17
	std::cout << std::get<0>(tup2) << ", " << std::get<1>(tup2) << ", "
		<< std::get<2>(tup2) << std::endl; // second, 4, 1.1

	std::get<0>(tup2) = "Second";

	std::cout << std::get<0>(tup2) << ", " << std::get<1>(tup2) << ", "
		<< std::get<2>(tup2) << std::endl; // second, 4, 1.1
	std::cout << std::boolalpha << (tup1 < tup2) << std::endl;	// false

	auto pair = std::make_pair(1, true);
	std::tuple<int, bool> tup = pair;

	std::cout << std::get<0>(tup) << ", " << std::get<1>(tup) << std::endl;
}