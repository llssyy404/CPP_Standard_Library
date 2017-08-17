//-------------------------------------------------------
// C++ ǥ�� ���̺귯��
//
// 2��. ���� ���� ���̺귯��
//-------------------------------------------------------
//
// <utility>
// std::pair
//-------------------------------------------------------

#include <iostream>
#include <utility>

using namespace std;

int main()
{
	pair<const char*, double> charDoub("str", 3.14);
	pair<const char*, double> charDoub2 = make_pair("str", 3.14);
	auto charDoub3 = make_pair("str", 3.14);

	cout << charDoub.first << ", " << charDoub.second << endl;	// str, 3.14
	charDoub.first = "Str";
	get<1>(charDoub) = 4.14;
	cout << charDoub.first << ", " << charDoub.second << endl;	// Str, 4.14
}