#include "Wolf.h"

Wolf::Wolf()
{
	this->name = "����";
	this->hp = 10;
	this->grawlSound = "�ƿ���";
}

void Wolf::grawl()
{
	cout << this->grawlSound << endl;
}

string Wolf::getName()
{
	return this->name;
}