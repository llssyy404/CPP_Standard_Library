//-------------------------------------------------------
// C++ ǥ�� ���̺귯��
//
// 2��. ���� ���� ���̺귯��
//-------------------------------------------------------
//
// <utility>
// std::move
// std::forward - �־��� �μ��� �����ϰ� �����ϴ� �Լ� ���ø� �ۼ� ����(���丮 �Լ��� �����ڿ� ����)
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

	std::string s = createT<std::string>("����� ���ڿ�.");
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