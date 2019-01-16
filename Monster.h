#include <string>
#pragma once

using namespace std;

//게임 내에 등장하는 몬스터에 대한 인터페이스
class Monster
{
public:
	//울부짖기
	virtual void grawl() = 0;

	virtual string getName() = 0;
protected:
	string name; //몬스터 이름
	int hp; // 체력
	string grawlSound; //울부짖을 때 나는 소리
};