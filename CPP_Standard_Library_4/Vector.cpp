//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 4장. 순차 컨테이너
//
// vector
//-------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> intVec1(5, 2011);
	intVec1.reserve(10);
	cout << intVec1.size() << endl;		// 5
	cout << intVec1.capacity() << endl;	// 10

	intVec1.shrink_to_fit();
	cout << intVec1.capacity() << endl;	// 5

	vector<int> intVec2(10);
	cout << intVec2.size() << endl;		// 10

	vector<int> intVec3{ 10 };
	cout << intVec3.size() << endl;		// 1

	vector<int> intVec4{ 5, 2011 };
	cout << intVec4.size() << endl;		// 2
}