//-------------------------------------------------------
// C++ ǥ�� ���̺귯��
//
// 2��. ���� ���� ���̺귯��
//-------------------------------------------------------
//
// <memory>
// std::auto_ptr
// std::unique_ptr
// std::shared_ptr
// std::weak_ptr
//-------------------------------------------------------

#include <iostream>
#include <memory>

using namespace std;

int main()
{
	auto_ptr<int> ap1(new int(2011));
	auto_ptr<int> ap2 = ap1;				// OK

	unique_ptr<int> up1(new int(2011));
	//unique_ptr<int> up2 = up1;			// ����
	unique_ptr<int> up3 = move(up1);		// OK
}