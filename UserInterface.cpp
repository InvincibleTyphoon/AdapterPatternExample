#include "UserInterface.h"



UserInterface::UserInterface()
{
}


void UserInterface::setItem(ActiveItem * item)
{
	this->activeItem = item;
}

void UserInterface::useItem()
{
	if (this->activeItem == NULL)
		return;
	this->activeItem->useItem();
}