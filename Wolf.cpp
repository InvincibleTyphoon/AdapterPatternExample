#include "Wolf.h"

Wolf::Wolf()
{
	this->name = "����";
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