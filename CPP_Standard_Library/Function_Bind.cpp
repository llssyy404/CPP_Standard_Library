//-------------------------------------------------------
// C++ ǥ�� ���̺귯��
//
// 2��. ���� ���� ���̺귯��
//-------------------------------------------------------
//
// <functional>
// std::bind
// std::function
//-------------------------------------------------------

#include <iostream>
#include <functional>
#include <map>

// �ڸ�ǥ(placeholder) _1�� _2�� ���� �̸����� ����
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

	// ȣ�� ���� ������ ������ ��������� �����ؾ��ϴ� ��� ����
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