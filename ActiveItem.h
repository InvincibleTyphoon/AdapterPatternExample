#pragma once
#include <string>
#include <iostream>

using namespace std;

class ActiveItem
{
public:
	virtual void useItem() = 0;
private:
	string name;
};

