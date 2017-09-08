//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 4장. 순차 컨테이너
//
// deque
//-------------------------------------------------------

#include <iostream>
#include <deque>

using namespace std;

struct MyInt {
	MyInt(int i) : myInt(i) {}
	int myInt;
};

int main()
{
	deque<MyInt> myIntDeq;

	myIntDeq.push_back(MyInt(5));
	myIntDeq.emplace_back(1);
	cout << myIntDeq.size() << endl;	// 2

	deque<int> intDeq;
	intDeq.assign({ 1, 2, 3 });
	for (auto v : intDeq) cout << v << ' ';	// 1 2 3
	cout << endl;

	intDeq.insert(intDeq.begin(), 0);
	for (auto v : intDeq) cout << v << ' ';	// 0 1 2 3
	cout << endl;

	intDeq.insert(intDeq.begin() + 4, 4);
	for (auto v : intDeq) cout << v << ' ';	// 0 1 2 3 4
	cout << endl;

	intDeq.insert(intDeq.end(), { 5, 6, 7, 8, 9, 10, 11 });
	for (auto v : intDeq) cout << v << ' ';	// 0 1 2 3 4 5 6 7 8 9 10 11
	cout << endl;

	for (auto revIt = intDeq.rbegin(); revIt != intDeq.rend(); ++revIt)
		cout << *revIt << ' ';				// 11 10 9 8 7 6 5 4 3 2 1 0
	cout << endl;

	intDeq.pop_back();
	for (auto v : intDeq) cout << v << ' ';	// 0 1 2 3 4 5 6 7 8 9 10
	cout << endl;

	intDeq.push_front(-1);
	for (auto v : intDeq) cout << v << ' ';	// -1 0 1 2 3 4 5 6 7 8 9 10
	cout << endl;
}