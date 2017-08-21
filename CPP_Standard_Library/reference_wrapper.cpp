//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 2장. 편의 수단 라이브러리
//-------------------------------------------------------
//
// <functional>
// std::reference_wrapper
//-------------------------------------------------------

#include <iostream>
#include <functional>

void foo() {
	std::cout << "호출됨" << std::endl;
}

typedef void callableUnit();
std::reference_wrapper<callableUnit> refWrap(foo);

int main()
{
	refWrap();		// 호출됨
}