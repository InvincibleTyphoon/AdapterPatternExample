#pragma once
#include <string>
#include "ActiveItem.h"
#include "Monster.h"

using namespace std;

//몬스터 -> 액티브 아이템 으로 맞춰주는 어댑터
class MonsterToActiveItemAdapter : public ActiveItem
{
public:
	MonsterToActiveItemAdapter(Monster * monster);
	void useItem() override;
private:
	Monster * monster;	//Adaptee 가 되는 몬스터
};

