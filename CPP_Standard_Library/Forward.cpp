//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 2장. 편의 수단 라이브러리
//-------------------------------------------------------
//
// <utility>
// std::move
// std::forward - 주어진 인수를 온전하게 전달하는 함수 템플릿 작성 가능(팩토리 함수나 생성자에 쓰임)
// std::swap
//-------------------------------------------------------

#include <iostream>
#include <utility>
#include <vector>

using std::cout;
using std::endl;
using std::initializer_list;

struct MyData {
	MyData(int a, double b, char c) {
		cout << a << ", " << b << ", " << c << endl;
	}
};

template<typename T, typename... Args>	// variadic template
T createT(Args&&... args) {
	return T(std::forward<Args>(args)...);
}

int main()
{
	int a = createT<int>();
	int b = createT<int>(1);

	std::string s = createT<std::string>("시험용 문자열.");
	cout << s.c_str() << endl;
	
	MyData myData2 = createT<MyData>(1, 3.19, 'a');

	typedef std::vector<int> IntVec;
	IntVec intVec = createT<IntVec>(initializer_list<int>({ 1, 2, 3 }));
	for (int i = 0; i < intVec.size(); ++i)
	{
		cout << intVec[i] << ", ";
	}
	cout << endl;
}