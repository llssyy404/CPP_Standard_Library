//-------------------------------------------------------
// C++ ǥ�� ���̺귯��
//
// 2��. ���� ���� ���̺귯��
//-------------------------------------------------------
//
// <type_traits>
// �⺻ ���� ���� ����
//-------------------------------------------------------

#include <iostream>
#include <type_traits>

using namespace std;

int main()
{
	cout << boolalpha << is_void<void>::value << endl;		// true
	cout << is_integral<short>::value << endl;				// true
	cout << is_floating_point<double>::value << endl;		// true
	cout << is_array<int[]>::value << endl;					// true
	cout << is_pointer<int*>::value << endl;				// true
	cout << is_reference<int&>::value << endl;				// true

	struct A {
		int a;
		int f(int) { return 2011; }
	};
	cout << is_member_object_pointer<int A::*>::value << endl;			// true
	cout << is_member_function_pointer<int (A::*)(int)>::value << endl;	// true

	enum E {
		e = 1,
	};
	cout << is_enum<E>::value << endl;						// true

	union U {
		int u;
	};
	cout << is_union<U>::value << endl;						// true

	cout << is_class<string>::value << endl;				// true
	cout << is_function<int * (double)>::value << endl;		// true
	cout << is_lvalue_reference<int&>::value << endl;		// true
	cout << is_rvalue_reference<int&&>::value << endl;		// true
}