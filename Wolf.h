#pragma once
#include <string>
#include <iostream>
#include "Monster.h"

using namespace std;

//¥¡¥Î ∏ÛΩ∫≈Õ
class Wolf : public Monster
{
public:
	Wolf();
	void grawl() override;
	string getName() override;
};