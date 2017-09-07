//-------------------------------------------------------
// C++ ǥ�� ���̺귯��
//
// 3��. ��� �����̳ʿ� ������ �������̽�
//
// ���԰� ��ȯ
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

	set1 = set2;				// ���� ����
	for (auto s : set1) cout << s << ' ';	// 6 7 8 9
	cout << endl;
	for (auto s : set2) cout << s << ' ';	// 6 7 8 9
	cout << endl;

	set1 = move(set2);			// �̵� ����
	for (auto s : set1) cout << s << ' ';	// 6 7 8 9
	cout << endl;
	for (auto s : set2) cout << s << ' ';	// 
	cout << endl;

	set2 = { 60, 70, 80, 90 };	// �ʱ�ġ ��� ����
	for (auto s : set1) cout << s << ' ';	// 6 7 8 9
	cout << endl;
	for (auto s : set2) cout << s << ' ';	// 60 70 80 90
	cout << endl;

	swap(set1, set2);			// ��ȯ
	for (auto s : set1) cout << s << ' ';	// 60 70 80 90
	cout << endl;
	for (auto s : set2) cout << s << ' ';	// 6 7 8 9
	cout << endl;

	set1.swap(set2);			// ��ȯ
	for (auto s : set1) cout << s << ' ';	// 6 7 8 9
	cout << endl;
	for (auto s : set2) cout << s << ' ';	// 60 70 80 90
	cout << endl;
}