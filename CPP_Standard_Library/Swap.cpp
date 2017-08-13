//-------------------------------------------------------
// C++ ǥ�� ���̺귯��
//
// 2��. ���� ���� ���̺귯��
//-------------------------------------------------------
//
// <utility>
// std::move
// std::forward
// std::swap
//-------------------------------------------------------

#include <iostream>
#include <utility>

using std::cout;
using std::endl;

template<typename T>
inline void swap(T& a, T& b) {	// C++ ǥ�� ���̺귯���� �Ϲ��� ����
	T temp(std::move(a));
	a = std::move(b);
	b = std::move(temp);
}

int main()
{
	int a = 1; int b = 2;
	swap<int>(a, b);
	cout << "a: " << a << endl;		// a: 2
	cout << "b: " << b << endl;		// b: 1

	double c = 3.33; double d = 4.44;
	std::swap(c, d);
	cout << "c: " << c << endl;		// c: 4.44
	cout << "d: " << d << endl;		// d: 3.33
}