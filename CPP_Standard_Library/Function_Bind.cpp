//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 2장. 편의 수단 라이브러리
//-------------------------------------------------------
//
// <functional>
// std::bind
// std::function
//-------------------------------------------------------

#include <iostream>
#include <functional>
#include <map>

// 자리표(placeholder) _1과 _2를 위한 이름공간 선언
using namespace std::placeholders;

using std::bind;
using std::function;
using std::make_pair;
using std::map;

double divMe(double a, double b) { return a / b; }

int main()
{
	function < double(double, double) > myDiv1 = bind(divMe, _1, _2);
	function < double(double) > myDiv2 = bind(divMe, 2000, _1);

	std::cout << divMe(2000, 10) << std::endl;		// 200
	std::cout << myDiv1(2000, 10) << std::endl;		// 200
	std::cout << myDiv2(10) << std::endl;			// 200

	// 호출 가능 단위의 형식을 명시적으로 지정해야하는 경우 예제
	map<const char, function<double(double, double)>> tab;
	tab.insert(make_pair('+', [](double a, double b) { return a + b; }));
	tab.insert(make_pair('-', [](double a, double b) { return a - b; }));
	tab.insert(make_pair('*', [](double a, double b) { return a * b; }));
	tab.insert(make_pair('/', [](double a, double b) { return a / b; }));

	std::cout << tab['+'](3.5, 4.5) << std::endl;	// 8
	std::cout << tab['-'](3.5, 4.5) << std::endl;	// -1
	std::cout << tab['*'](3.5, 4.5) << std::endl;	// 15.75
	std::cout << tab['/'](3.5, 4.5) << std::endl;	// 0.777778
}