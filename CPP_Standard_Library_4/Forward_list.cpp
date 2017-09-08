//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 4장. 순차 컨테이너
//
// forward_list
//-------------------------------------------------------

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> forw;
	cout << boolalpha << forw.empty() << endl;	// true

	forw.push_front(7);
	forw.push_front(6);
	forw.push_front(5);
	forw.push_front(4);
	forw.push_front(3);
	forw.push_front(2);
	forw.push_front(1);
	for (auto i : forw) cout << i << ' ';		// 1 2 3 4 5 6 7
	cout << endl;

	forw.erase_after(forw.before_begin());
	cout << forw.front() << endl;				// 2

	forward_list<int> forw2;
	forw2.insert_after(forw2.before_begin(), 1);
	forw2.insert_after(forw2.before_begin()++, 2);
	forw2.insert_after((forw2.before_begin()++)++, 3);
	forw2.push_front(1000);
	for (auto i = forw2.cbegin(); i != forw2.cend(); ++i) cout << *i << ' ';
	cout << endl;	// 1000 3 2 1

	auto IteratorTo5 = find(forw.begin(), forw.end(), 5);
	forw.splice_after(IteratorTo5, move(forw2));
	for (auto i = forw.cbegin(); i != forw.cend(); ++i) cout << *i << ' ';
	cout << endl;	// 2 3 4 5 1000 3 2 1 6 7

	forw.sort();
	for (auto i = forw.cbegin(); i != forw.cend(); ++i) cout << *i << ' ';
	cout << endl;	// 1 2 2 3 3 4 5 6 7 1000

	forw.reverse();
	for (auto i = forw.cbegin(); i != forw.cend(); ++i) cout << *i << ' ';
	cout << endl;	// 1000 7 6 5 4 3 3 2 2 1

	forw.unique();
	for (auto i = forw.cbegin(); i != forw.cend(); ++i) cout << *i << ' ';
	cout << endl;	// 1000 7 6 5 4 3 2 1
}