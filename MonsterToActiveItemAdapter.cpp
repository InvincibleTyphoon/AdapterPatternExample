#include "MonsterToActiveItemAdapter.h"



MonsterToActiveItemAdapter::MonsterToActiveItemAdapter(Monster * monster)
{
	this->monster = monster;
	this->name = string("������ ") + monster->getName();
}
void MonsterToActiveItemAdapter::useItem()
{
	monster->grawl();
}