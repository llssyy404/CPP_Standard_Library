//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 4장. 순차 컨테이너
//
// 배열
//-------------------------------------------------------

#include <iostream>
#include <array>
#include <numeric>

using namespace std;

int main()
{
	array<int, 10> arr{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (auto a : arr) cout << a << ' ';	// 1 2 3 4 5 6 7 8 9 10
	cout << endl;

	double sum = accumulate(arr.begin(), arr.end(), 0);
	cout << sum << endl;					// 55

	double mean = sum / arr.size();
	cout << mean << endl;					// 5.5
	cout << boolalpha << (arr[0] == get<0>(arr)) << endl;// true
}