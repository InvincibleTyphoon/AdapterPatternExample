#pragma once
#include <string>
#include <iostream>

using namespace std;

//����ϴ� �������� �������̽�
class ActiveItem
{
public:
	virtual void useItem() = 0;
protected:
	//������ �̸�
	string name;
};

