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

class ShareMe : public enable_shared_from_this<ShareMe> {
public:
	shared_ptr<ShareMe> getShared() {
		return shared_from_this();
	}
};

int main()
{
	shared_ptr<ShareMe> shareMe(new ShareMe);
	shared_ptr<ShareMe> shareMe1 = shareMe->getShared();

	cout << (void*)shareMe.get() << endl;		// 0x152d010
	cout << (void*)shareMe1.get() << endl;		// 0x152d010
	cout << shareMe.use_count() << endl;		// 2
}