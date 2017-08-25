//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 2장. 편의 수단 라이브러리
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
		cout << (void*)this << " 진입: " << val << endl;
		MyStruct::count++;
	}
	~MyStruct() {
		cout << (void*)this << " 퇴장: " << val << endl;
		MyStruct::count--;
	}
private:
	int val;
	static int count;
};

int MyStruct::count = 0;

int main()
{
	// 배열을 위한 특수화
	// MyStructs 세 개를 담는 myUniqueArray를 생성한다.
	unique_ptr<MyStruct[]> myUniqueArray{ new MyStruct[3] };
	// 2A8948 진입: 0
	// 2A894C 진입: 1
	// 2A8950 진입: 2
	// 2A8950 퇴장: 2
	// 2A894C 퇴장: 1
	// 2A8948 퇴장: 0
}