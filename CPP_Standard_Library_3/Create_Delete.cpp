//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 3장. 모든 컨테이너에 공통인 인터페이스
//
// 컨테이너의 생성과 삭제
//-------------------------------------------------------

#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	map<string, int> m = { {"bart", 12345}, {"jenne", 34929}, {"huber", 840284} };
	unordered_map<string, int> um{ m.begin(), m.end() };

	for (auto v : vec) cout << v << " ";	// 1 2 3 4 5 6 7 8 9
	cout << endl;
	for (auto p : m) cout << p.first << "," << p.second << " ";		// bart,12345 huber,840284 jenne,34929
	cout << endl;
	for (auto p : um) cout << p.first << "," << p.second << " ";	// bart,12345 jenne,34929 huber,840284
	cout << endl;

	vector<int> vec2 = vec;
	cout << vec.size() << endl;		// 9
	cout << vec2.size() << endl;	// 9

	vector<int> vec3 = move(vec);
	cout << vec.size() << endl;		// 0
	cout << vec3.size() << endl;	// 9

	vec3.clear();
	cout << vec3.size() << endl;	// 0
}