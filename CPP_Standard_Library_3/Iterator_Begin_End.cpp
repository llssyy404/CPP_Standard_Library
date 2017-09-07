//-------------------------------------------------------
// C++ ǥ�� ���̺귯��
//
// 3��. ��� �����̳ʿ� ������ �������̽�
//
// �����̳� ��� ����
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