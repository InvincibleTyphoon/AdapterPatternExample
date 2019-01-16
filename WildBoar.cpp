#include "WildBoar.h"



WildBoar::WildBoar()
{
	this->name = "¸äµÅÁö";
	this->hp = 30;
	this->grawlSound = "²Ü²Ü";
}

void WildBoar::grawl()
{
	cout << this->grawlSound << endl;

}

string WildBoar::getName()
{
	return this->name;
}