#include <string>
#pragma once

using namespace std;

//���� ���� �����ϴ� ���Ϳ� ���� �������̽�
class Monster
{
public:
	//���¢��
	virtual void grawl() = 0;

	virtual string getName() = 0;
protected:
	string name; //���� �̸�
	int hp; // ü��
	string grawlSound; //���¢�� �� ���� �Ҹ�
};