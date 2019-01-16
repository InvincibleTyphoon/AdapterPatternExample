#include "MonsterToActiveItemAdapter.h"



MonsterToActiveItemAdapter::MonsterToActiveItemAdapter(Monster * monster)
{
	this->monster = monster;
	this->name = string("ºÙÀâÈù ") + monster->getName();
}

void MonsterToActiveItemAdapter::useItem()
{
	monster->grawl();
}