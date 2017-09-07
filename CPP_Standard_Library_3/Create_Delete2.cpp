//-------------------------------------------------------
// C++ 표준 라이브러리
//
// 3장. 모든 컨테이너에 공통인 인터페이스
//
// 컨테이너의 생성과 삭제
//-------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec1;								// 기본
	vector<int> vec2(vec1.begin(), vec1.end());		// 범위
	vector<int> vec3(vec2);							// 복사
	vector<int> vec4 = vec3;						// 복사
	vector<int> vec5(std::move(vec4));				// 이동
	vector<int> vec6 = std::move(vec5);				// 이동
	vector<int> vec7 { 1, 2, 3, 4, 5 };				// 순차열(초기치 목록)
	vector<int> vec8 = { 1, 2, 3, 4, 5 };			// 순차열(초기치 목록)
	vec8.~vector();									// 소멸자
	vec7.clear();									// 요소 지우기
}