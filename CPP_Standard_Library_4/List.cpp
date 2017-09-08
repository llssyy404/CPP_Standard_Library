//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 4장. 순차 컨테이너
//
// list
//-------------------------------------------------------

#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> list1{ 15, 2, 18, 19, 4, 15, 1, 3, 18, 5, 4, 7, 17, 9, 16, 8, 6, 6, 17, 1, 2 };

	list1.sort();
	for (auto l : list1) cout << l << ' ';
	cout << endl;	// 1 1 2 2 3 4 4 5 6 6 7 8 9 15 15 16 17 17 18 18 19
		
	list1.unique();
	for (auto l : list1) cout << l << ' ';
	cout << endl;	// 1 2 3 4 5 6 7 8 9 15 16 17 18 19

	list<int> list2{ 10, 11, 12, 13, 14 };
	list1.splice(find(list1.begin(), list1.end(), 15), list2);
	for (auto l : list1) cout << l << ' ';
	cout << endl;	// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
}