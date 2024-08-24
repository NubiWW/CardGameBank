#include "Card.h"
#include <string>
#include "attack.h"
#include <iostream>
#include <fstream>
using namespace std;


Card::Card() {
	this->name = "emptyName";
	this->currentHP = 0;
	this->maxHP = 0;
	this->type1 = "none";
	this->type2 = "none also";
	this->stage = "basic";
	this->dexInfo = "emptyInfo";
}



Card::Card(string name, int maxHP, string type1, string type2, string stage, string dexInfo, int dexNum){
	this->name = name; //arrow is a way of dereferencing with less characters, also accesses members
	this->currentHP = maxHP;
	this->maxHP = maxHP;
	this->type1 = type1;
	this->type2 = type2;
	this->stage = stage;
	this->dexInfo = dexInfo;
	this->dexNum = dexNum;
}

Card::~Card() {

}

void Card::setAttack1(attack* attack) {
	atk1 = *attack;
}

void Card::setAttack2(attack* attack) {
	atk2 = *attack;
}

ostream& operator<< (ostream& os, const Card& card) {
	string printedDexNum = "";
	if (card.dexNum < 1000) {
		printedDexNum = "0" + to_string(card.dexNum);
	}
	os << card.name << "     hp: " << to_string(card.currentHP) << " / " << to_string(card.maxHP) << " \n" <<
		"TYPE ONE: " << card.type1 << "TYPE TWO: " << card.type2 << "STAGE: " << card.stage << " \n" <<
		card.atk1 << card.atk2 << " \n" <<
		" ' NO." << printedDexNum << card.dexInfo << " ' \n";

	return os;
};