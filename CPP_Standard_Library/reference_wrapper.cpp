//-------------------------------------------------------
// C++ ǥ�� ���̺귯��
//
// 2��. ���� ���� ���̺귯��
//-------------------------------------------------------
//
// <functional>
// std::reference_wrapper
//-------------------------------------------------------

#include <iostream>
#include <functional>

void foo() {
	std::cout << "ȣ���" << std::endl;
}

typedef void callableUnit();
std::reference_wrapper<callableUnit> refWrap(foo);

int main()
{
	refWrap();		// ȣ���
}