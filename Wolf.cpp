#include "Wolf.h"

Wolf::Wolf()
{
	this->name = "期渠";
	this->hp = 10;
	this->grawlSound = "嬴辦辦辦";
}

void Wolf::grawl()
{
	cout << this->grawlSound << endl;
}

string Wolf::getName()
{
	return this->name;
}