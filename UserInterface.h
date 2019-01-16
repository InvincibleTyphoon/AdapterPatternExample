#pragma once
#include "ActiveItem.h"

//사용자 인터페이스
class UserInterface
{
public:
	UserInterface();

	//현재 손에 들린 아이템을 item으로 변경한다
	void setItem(ActiveItem * item);

	//현재 손에 들린 아이템을 사용한다.
	void useItem();
private:
	//현재 손에 들려진 아이템
	ActiveItem * activeItem = NULL;
};