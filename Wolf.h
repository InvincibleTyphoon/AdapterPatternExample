#pragma once
#include <string>
#include <iostream>
#include "Monster.h"

using namespace std;

class Wolf : public Monster
{
public:
	Wolf();
	void grawl() override;
	string getName() override;
private:
	string name;
	int hp;
	string grawlSound;
};