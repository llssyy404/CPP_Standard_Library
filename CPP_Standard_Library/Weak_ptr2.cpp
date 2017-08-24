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
// 순환참조 예제
//-------------------------------------------------------

#include <iostream>
#include <memory>

using namespace std;

struct Son;
struct Daughter;

struct Mother {
	~Mother() { cout << "Mother 해제" << endl; }
	void setSon(const shared_ptr<Son> s) { mySon = s; }
	void setDaughter(const shared_ptr<Daughter> d) { myDaughter = d; }

	shared_ptr<const Son> mySon;
	weak_ptr<const Daughter> myDaughter;
};

struct Son {
	Son(shared_ptr<Mother> m) : myMother(m) {}
	~Son() { cout << "Son 해제" << endl; }

	shared_ptr<const Mother> myMother;
};

struct Daughter {
	Daughter(shared_ptr<Mother> m) : myMother(m) {}
	~Daughter() { cout << "Daughter 해제" << endl; }

	shared_ptr<const Mother> myMother;
};

int main()
{
	shared_ptr<Mother> mother = shared_ptr<Mother>(new Mother);
	shared_ptr<Son> son = shared_ptr<Son>(new Son(mother));
	shared_ptr<Daughter> daughter = shared_ptr<Daughter>(new Daughter(mother));
	mother->setSon(son);
	mother->setDaughter(daughter);
	// Daughter 해제
}