#pragma once
#include <string>
#include <iostream>

using namespace std;

//사용하는 아이템의 인터페이스
class ActiveItem
{
public:
	virtual void useItem() = 0;
protected:
	//아이템 이름
	string name;
};

