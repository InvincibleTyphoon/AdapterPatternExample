#include "WildBoar.h"



WildBoar::WildBoar()
{
	this->name = "�����";
	this->hp = 30;
	this->grawlSound = "�ܲ�";
}

void WildBoar::grawl()
{
	cout << this->grawlSound << endl;

}

string WildBoar::getName()
{
	return this->name;
}