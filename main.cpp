#include <iostream>
#include "MonsterToActiveItemAdapter.h"
#include "UserInterface.h"
#include "Monster.h"
#include "WildBoar.h"
#include "Wolf.h"

int main()
{
	Monster * monster = new WildBoar();
	UserInterface ui;

	MonsterToActiveItemAdapter * adapter1 = new MonsterToActiveItemAdapter(monster);
	ui.setItem(adapter1);
	ui.useItem();

	monster = new Wolf();
	MonsterToActiveItemAdapter * adapter2 = new MonsterToActiveItemAdapter(monster);
	ui.setItem(adapter2);
	ui.useItem();





	return 0;
}