#pragma once
#include <string>
#include <iostream>
#include "Monster.h"

using namespace std;

//¸äµÅÁö ¸ó½ºÅÍ
class WildBoar : public Monster
{
public:
	WildBoar();
	void grawl() override;
	string getName() override;
};

