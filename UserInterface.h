#pragma once
#include "ActiveItem.h"

//����� �������̽�
class UserInterface
{
public:
	UserInterface();

	//���� �տ� �鸰 �������� item���� �����Ѵ�
	void setItem(ActiveItem * item);

	//���� �տ� �鸰 �������� ����Ѵ�.
	void useItem();
private:
	//���� �տ� ����� ������
	ActiveItem * activeItem = NULL;
};