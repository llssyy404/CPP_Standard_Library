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

class MyInt {
public:
	MyInt(int v) : val(v) {
		cout << "����: " << val << endl;
	}
	~MyInt() {
		cout << "����: " << val << endl;
	}
private:
	int val;
};

int main()
{
	auto sharPtr = make_shared<MyInt>(1998);		// ����: 1998
	cout << sharPtr.use_count() << endl;			// 1

	{
		shared_ptr<MyInt> locSharPtr(sharPtr);
		cout << locSharPtr.use_count() << endl;		// 2
	}
	cout << sharPtr.use_count() << endl;			// 1

	shared_ptr<MyInt> globSharPtr = sharPtr;
	cout << sharPtr.use_count() << endl;			// 2

	globSharPtr.reset();
	cout << sharPtr.use_count() << endl;			// 1
	sharPtr = shared_ptr<MyInt>(new MyInt(2011));	// ����: 2011
													// ����: 1998
													// ����: 2011
}