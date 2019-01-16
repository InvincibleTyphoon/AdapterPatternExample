#include <iostream>
#include "MonsterToActiveItemAdapter.h"
#include "UserInterface.h"
#include "Monster.h"
#include "WildBoar.h"
#include "Wolf.h"

int main()
{
	
	UserInterface ui;
	
	/******************************����� ���ͷ� �׽�Ʈ**********************************/
	Monster * monster = new WildBoar();
	MonsterToActiveItemAdapter * adapter1 = new MonsterToActiveItemAdapter(monster);
	ui.setItem(adapter1);
	ui.useItem();
	///////////////////////////////////////////////////////////////////////////////////////

	/******************************���� ���ͷ� �׽�Ʈ**********************************/
	monster = new Wolf();
	MonsterToActiveItemAdapter * adapter2 = new MonsterToActiveItemAdapter(monster);
	ui.setItem(adapter2);
	ui.useItem();
	///////////////////////////////////////////////////////////////////////////////////////

	return 0;
}