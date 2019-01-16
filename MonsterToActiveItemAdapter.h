#pragma once
#include <string>
#include "ActiveItem.h"
#include "Monster.h"

using namespace std;

//���� -> ��Ƽ�� ������ ���� �����ִ� �����
class MonsterToActiveItemAdapter : public ActiveItem
{
public:
	MonsterToActiveItemAdapter(Monster * monster);
	void useItem() override;
private:
	Monster * monster;	//Adaptee �� �Ǵ� ����
};

