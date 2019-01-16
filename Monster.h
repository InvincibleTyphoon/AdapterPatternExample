#include <string>
#pragma once

using namespace std;

class Monster
{
public:
	virtual void grawl() = 0;
	virtual string getName() = 0;
private:
	string name;
	int hp;
	string grawlSound;
};