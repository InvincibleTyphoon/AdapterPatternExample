#include <iostream>
#include "MonsterToActiveItemAdapter.h"
#include "UserInterface.h"
#include "Monster.h"
#include "WildBoar.h"
#include "Wolf.h"

int main()
{
	
	UserInterface ui;
	
	/******************************멧돼지 몬스터로 테스트**********************************/
	Monster * monster = new WildBoar();
	MonsterToActiveItemAdapter * adapter1 = new MonsterToActiveItemAdapter(monster);
	ui.setItem(adapter1);
	ui.useItem();
	///////////////////////////////////////////////////////////////////////////////////////

	/******************************늑대 몬스터로 테스트**********************************/
	monster = new Wolf();
	MonsterToActiveItemAdapter * adapter2 = new MonsterToActiveItemAdapter(monster);
	ui.setItem(adapter2);
	ui.useItem();
	///////////////////////////////////////////////////////////////////////////////////////

	return 0;
}