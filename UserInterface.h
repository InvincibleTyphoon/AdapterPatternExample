#pragma once
#include "ActiveItem.h"

class UserInterface
{
public:
	UserInterface();
	void setItem(ActiveItem * item);
	void useItem();
private:
	ActiveItem * activeItem = NULL;
};