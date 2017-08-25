//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 2장. 편의 수단 라이브러리
//-------------------------------------------------------
//
// <type_traits>
// 기본 형식 범주 예제
//-------------------------------------------------------

#include <iostream>
#include <type_traits>

using namespace std;

int main()
{
	cout << boolalpha << is_void<void>::value << endl;				// true
	cout << boolalpha << is_integral<short>::value << endl;			// true
	cout << boolalpha << is_floating_point<double>::value << endl;	// true
	cout << boolalpha << is_array<int[]>::value << endl;			// true
	cout << boolalpha << is_pointer<int*>::value << endl;			// true
	cout << boolalpha << is_reference<int&>::value << endl;			// true

	struct A {
		int a;
		int f(int) { return 2011; }
	};
	cout << boolalpha << is_member_object_pointer<int A::*>::value << endl;			// true
	cout << boolalpha << is_member_function_pointer<int (A::*)(int)>::value << endl;// true

	enum E {
		e = 1,
	};
	cout << boolalpha << is_enum<E>::value << endl;					// true

	union U {
		int u;
	};
	cout << boolalpha << is_union<U>::value << endl;				// true

	cout << boolalpha << is_class<string>::value << endl;			// true
	cout << boolalpha << is_function<int * (double)>::value << endl;// true
	cout << boolalpha << is_lvalue_reference<int&>::value << endl;	// true
	cout << boolalpha << is_rvalue_reference<int&&>::value << endl;	// true
}