//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 3장. 모든 컨테이너에 공통인 인터페이스
//
// 대입과 교환
//-------------------------------------------------------

#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> set1{ 0, 1, 2, 3, 4, 5 };
	set<int> set2{ 6, 7, 8, 9 };
	for (auto s : set1) cout << s << ' ';	// 0 1 2 3 4 5
	cout << endl;
	for (auto s : set2) cout << s << ' ';	// 6 7 8 9
	cout << endl;

	set1 = set2;				// 복사 배정
	for (auto s : set1) cout << s << ' ';	// 6 7 8 9
	cout << endl;
	for (auto s : set2) cout << s << ' ';	// 6 7 8 9
	cout << endl;

	set1 = move(set2);			// 이동 배정
	for (auto s : set1) cout << s << ' ';	// 6 7 8 9
	cout << endl;
	for (auto s : set2) cout << s << ' ';	// 
	cout << endl;

	set2 = { 60, 70, 80, 90 };	// 초기치 목록 배정
	for (auto s : set1) cout << s << ' ';	// 6 7 8 9
	cout << endl;
	for (auto s : set2) cout << s << ' ';	// 60 70 80 90
	cout << endl;

	swap(set1, set2);			// 교환
	for (auto s : set1) cout << s << ' ';	// 60 70 80 90
	cout << endl;
	for (auto s : set2) cout << s << ' ';	// 6 7 8 9
	cout << endl;

	set1.swap(set2);			// 교환
	for (auto s : set1) cout << s << ' ';	// 6 7 8 9
	cout << endl;
	for (auto s : set2) cout << s << ' ';	// 60 70 80 90
	cout << endl;
}