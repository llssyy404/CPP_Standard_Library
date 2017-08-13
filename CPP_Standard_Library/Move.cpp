//-------------------------------------------------------
// C++ ǥ�� ���̺귯��
//
// 2��. ���� ���� ���̺귯��
//-------------------------------------------------------
//
// <utility>
// std::move - �����Ϸ��� ���α׷��� �ڿ��� �̵��� �� �ְ� ����� ����
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
	cout << &myBigVec[0] << endl;	// �ּ� a
	cout << &myVec[0] << endl;		// �ּ� b
	myVec = std::move(myBigVec);	// move semantics.
	//cout << &myBigVec[0] << endl;	// error
	cout << &myVec[0] << endl;		// �ּ� a
}