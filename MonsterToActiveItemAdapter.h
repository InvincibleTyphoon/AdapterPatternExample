#pragma once
#include <string>
#include "ActiveItem.h"
#include "Monster.h"

using namespace std;

class MonsterToActiveItemAdapter : public ActiveItem
{
public:
	MonsterToActiveItemAdapter(Monster * monster);
	void useItem();

private:
	string name;
	Monster * monster;
};

