//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 3장. 모든 컨테이너에 공통인 인터페이스
//
// 컨테이너 요소 접근
//-------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

struct MyInt {
	MyInt(int i) : myInt(i) {}
	int myInt;
};

int main()
{
	vector<MyInt> myIntVec;
	myIntVec.push_back(MyInt(5));
	myIntVec.emplace_back(1);
	cout << myIntVec.size() << endl;		// 2

	vector<int> intVec;
	intVec.assign({ 1, 2, 3 });
	for (auto v : intVec) cout << v << ' ';	// 1 2 3
	cout << endl;

	intVec.insert(intVec.begin(), 0);
	for (auto v : intVec) cout << v << ' ';	// 0 1 2 3
	cout << endl;

	intVec.insert(intVec.begin()+4, 4);
	for (auto v : intVec) cout << v << ' ';	// 0 1 2 3 4
	cout << endl;

	intVec.insert(intVec.end(), { 5, 6, 7, 8, 9, 10, 11 });
	for (auto v : intVec) cout << v << ' ';	// 0 1 2 3 4 5 6 7 8 9 10 11
	cout << endl;

	for (auto revIt = intVec.rbegin(); revIt != intVec.rend(); ++revIt)
		cout << *revIt << ' ';				// 11 10 9 8 7 6 5 4 3 2 1 0
	cout << endl;

	intVec.pop_back();
	for (auto v : intVec) cout << v << ' ';	// 0 1 2 3 4 5 6 7 8 9 10
	cout << endl;

}