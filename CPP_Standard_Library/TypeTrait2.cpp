//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 2장. 편의 수단 라이브러리
//-------------------------------------------------------
//
// <type_traits>
// 형식의 상수성 변경 예제
//-------------------------------------------------------

#include <iostream>
#include <type_traits>

using namespace std;

int main()
{
	cout << boolalpha << is_const<int>::value << endl;						// false
	cout << boolalpha << is_const<const int>::value << endl;				// true
	cout << boolalpha << is_const<add_const<int>::type>::value << endl;		// true

	typedef add_const<int>::type myConstInt;
	cout << boolalpha << is_const<myConstInt>::value << endl;				// true

	typedef const int myConstInt2;
	cout << boolalpha << is_same<myConstInt, myConstInt2>::value << endl;	// true

	cout << boolalpha << 
		is_same<int, remove_const<add_const<int>::type>::type>::value << endl;		// true
	cout << boolalpha << 
		is_same<const int, add_const<add_const<int>::type>::type>::value << endl;	// true
}