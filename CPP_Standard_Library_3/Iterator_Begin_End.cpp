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

int main()
{
	vector<int> vec1{ 1, 2, 3, 4, 5 };
	for (vector<int>::iterator it = vec1.begin(); it != vec1.end(); ++it)
	{
		cout << *it << ' ';	// 1 2 3 4 5
	}
	cout << endl;

	for (vector<int>::const_iterator it = vec1.cbegin(); it != vec1.cend(); ++it)
	{
		cout << *it << ' '; // 1 2 3 4 5
	}
	cout << endl;

	for (vector<int>::reverse_iterator it = vec1.rbegin(); it != vec1.rend(); ++it)
	{
		cout << *it << ' '; // 5 4 3 2 1
	}
	cout << endl;

	for (vector<int>::const_reverse_iterator it = vec1.crbegin(); it != vec1.crend(); ++it)
	{
		cout << *it << ' '; // 5 4 3 2 1
	}
	cout << endl;
}