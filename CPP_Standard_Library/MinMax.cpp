//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 2장. 편의 수단 라이브러리
//-------------------------------------------------------
//
// <algorithm>
// std::min - 최소값 리턴
// std::max - 최대값 리턴
// std::minmax - std::pair로 리턴. first - 최소값, second - 최대값
//-------------------------------------------------------

#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;

int main()
{
	cout << std::max(2011, 2014) << endl;					// 2014
	cout << std::min({ 3, 1, 2011, 2014, -5 }) << endl;		// -5
	cout << std::min(-10, -5, [](int a, int b) { 
		return std::abs(a) < std::abs(b);					// -5
	}) << endl;

	auto pairInt = std::minmax(2011, 2014);
	auto pairSeq = std::minmax({ 3, 1, 2011, 2014, -5 });
	auto pairAbs = std::minmax({ 3, 1, 2011, 2014, -5 }, [](int a, int b) {
		return std::abs(a) < std::abs(b);
	});

	cout << pairInt.first << ", " << pairInt.second << endl;	// 2011, 2014
	cout << pairSeq.first << ", " << pairSeq.second << endl;	// -5, 2014
	cout << pairAbs.first << ", " << pairAbs.second << endl;	// 1, 2014
}