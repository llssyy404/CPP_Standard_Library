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
#include <utility>

using namespace std;

class MyStruct {
public:
	MyStruct() : val(count) {
		cout << (void*)this << " ����: " << val << endl;
		MyStruct::count++;
	}
	~MyStruct() {
		cout << (void*)this << " ����: " << val << endl;
		MyStruct::count--;
	}
private:
	int val;
	static int count;
};

int MyStruct::count = 0;

int main()
{
	// �迭�� ���� Ư��ȭ
	// MyStructs �� ���� ��� myUniqueArray�� �����Ѵ�.
	unique_ptr<MyStruct[]> myUniqueArray{ new MyStruct[3] };
	// 2A8948 ����: 0
	// 2A894C ����: 1
	// 2A8950 ����: 2
	// 2A8950 ����: 2
	// 2A894C ����: 1
	// 2A8948 ����: 0
}