//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 2장. 편의 수단 라이브러리
//-------------------------------------------------------
//
// <utility>
// std::move - 컴파일러가 프로그램의 자원을 이동할 수 있게 만드는 수단
// std::forward
// std::swap
//-------------------------------------------------------

#include <iostream>
#include <utility>
#include <vector>

using std::cout;
using std::endl;

int main()
{
	std::vector<int> myBigVec(10000000, 2011);
	std::vector<int> myVec;

	myVec = myBigVec;				// copy semantics
	cout << &myBigVec[0] << endl;	// 주소 a
	cout << &myVec[0] << endl;		// 주소 b
	myVec = std::move(myBigVec);	// move semantics.
	//cout << &myBigVec[0] << endl;	// error
	cout << &myVec[0] << endl;		// 주소 a
}