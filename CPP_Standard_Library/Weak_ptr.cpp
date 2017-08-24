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
	auto sharedPtr = make_shared<int>(2011);
	weak_ptr<int> weakPtr(sharedPtr);

	cout << weakPtr.use_count() << endl;	// 1
	cout << sharedPtr.use_count() << endl;	// 1

	cout << boolalpha << weakPtr.expired() << endl;	// false
	if (shared_ptr<int> sharedPtr1 = weakPtr.lock()) {
		cout << *sharedPtr << endl;			// 2011
	}
	else {
		cout << "�ڿ� ȹ�� ����!" << endl;
	}

	weakPtr.reset();
	cout << boolalpha << weakPtr.expired() << endl;	// true

	if (shared_ptr<int> sharedPtr1 = weakPtr.lock()) {
		cout << *sharedPtr << endl;
	}
	else {
		cout << "�ڿ� ȹ�� ����!" << endl;	// �ڿ� ȹ�� ����!
	}
}