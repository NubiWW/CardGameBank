#pragma once
#include <string>
#include "attack.h"
using namespace std;
class Card
{
public:
	string name;
	int currentHP;
	int maxHP;
	string type1;
	string type2;
	string stage;
	attack atk1;
	attack atk2;
	int dexNum;
	string dexInfo;

	Card();
	Card(string name, int maxHP, string type1, string type2, string stage, attack atk1, string dexInfo, int dexNum);

	~Card(); //destructor

	void setAttack1(attack* attack);
	void setAttack2(attack* attack);

	friend ostream& operator<< (ostream& os, const Card& card);
};

