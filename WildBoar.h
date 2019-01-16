#pragma once
#include <string>
#include <iostream>
#include "Monster.h"

using namespace std;

class WildBoar : public Monster
{
public:
	WildBoar();
	void grawl() override;
	string getName() override;

private:
	string name;
	int hp;
	string grawlSound;
};

