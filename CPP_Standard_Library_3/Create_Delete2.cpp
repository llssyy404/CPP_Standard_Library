//-------------------------------------------------------
// C++ ǥ�� ���̺귯��
//
// 3��. ��� �����̳ʿ� ������ �������̽�
//
// �����̳��� ������ ����
//-------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec1;								// �⺻
	vector<int> vec2(vec1.begin(), vec1.end());		// ����
	vector<int> vec3(vec2);							// ����
	vector<int> vec4 = vec3;						// ����
	vector<int> vec5(std::move(vec4));				// �̵�
	vector<int> vec6 = std::move(vec5);				// �̵�
	vector<int> vec7 { 1, 2, 3, 4, 5 };				// ������(�ʱ�ġ ���)
	vector<int> vec8 = { 1, 2, 3, 4, 5 };			// ������(�ʱ�ġ ���)
	vec8.~vector();									// �Ҹ���
	vec7.clear();									// ��� �����
}