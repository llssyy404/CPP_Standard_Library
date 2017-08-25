//-------------------------------------------------------
// C++ ǥ�� ���̺귯��
//
// 2��. ���� ���� ���̺귯��
//-------------------------------------------------------
//
// <type_traits>
// static_assert���� ����
//-------------------------------------------------------

#include <iostream>
#include <type_traits>

template<typename T>T fac(T a) {
	static_assert(std::is_integral<T>::value, "T�� ���� ������ �ƴ�");

	return a;
}

int main()
{
	fac(10);
	//fac(10.1);	// Error
}