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

struct MyInt {
	MyInt(int i) : i_(i) {}
	~MyInt() {
		cout << "퇴장: " << i_ << endl;
	}
	int i_;
};

int main()
{
	unique_ptr<MyInt> uniquePtr1{ new MyInt(1998) };
	cout << uniquePtr1.get() << endl;					// 1B4490

	unique_ptr<MyInt> uniquePtr2{ move(uniquePtr1) };
	cout << uniquePtr1.get() << endl;					// 0
	cout << uniquePtr2.get() << endl;					// 1B4490
	{
		unique_ptr<MyInt> localPtr{ new MyInt(2003) };
	}													// 퇴장: 2003
	uniquePtr2.reset(new MyInt(2011));					// 퇴장: 1998
	MyInt* myInt = uniquePtr2.release();
	delete myInt;										// 퇴장: 2011

	unique_ptr<MyInt> uniquePtr3{ new MyInt(2017) };
	unique_ptr<MyInt> uniquePtr4{ new MyInt(2022) };
	cout << uniquePtr3.get() << endl;					// 1B44D0
	cout << uniquePtr4.get() << endl;					// 1B4490

	swap(uniquePtr3, uniquePtr4);
	cout << uniquePtr3.get() << endl;					// 1B4490
	cout << uniquePtr4.get() << endl;					// 1B44D0
	
														// 퇴장: 2017
														// 퇴장: 2022
}