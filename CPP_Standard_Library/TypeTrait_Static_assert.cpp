//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 2장. 편의 수단 라이브러리
//-------------------------------------------------------
//
// <type_traits>
// static_assert와의 조합
//-------------------------------------------------------

#include <iostream>
#include <type_traits>

template<typename T>T fac(T a) {
	static_assert(std::is_integral<T>::value, "T는 정수 형식이 아님");

	return a;
}

int main()
{
	fac(10);
	//fac(10.1);	// Error
}