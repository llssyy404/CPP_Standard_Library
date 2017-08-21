//-------------------------------------------------------
// C++ ǥ�� ���̺귯��
//
// 2��. ���� ���� ���̺귯��
//-------------------------------------------------------
//
// <functional>
// std::ref
// std::cref
//-------------------------------------------------------

#include <iostream>
#include <functional>
#include <string>

void invokeMe(const std::string& s) {
	std::cout << s << ": const " << std::endl;
}

template<typename T>
void doubleMe(T t) {
	t *= 2;
}

int main()
{
	std::string s{ "���ڿ�" };

	invokeMe(std::cref(s));			// ���ڿ�: const

	int i = 1;
	std::cout << i << std::endl;	// 1

	doubleMe(i);
	std::cout << i << std::endl;	// 1

	doubleMe(std::ref(i));
	std::cout << i << std::endl;	// 2
}