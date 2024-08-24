#include "attack.h"
#include <string>
#include <iostream>
using namespace std;

attack::attack() {
	this->name = "emptyName";
	this->dmg = 1;
	this->atkInfo = "emptyAtk";
	this->type = "none";
}

attack::attack(string name, int dmg, string atkInfo, string type) {
	this->name = name;
	this->dmg = dmg;
	this->atkInfo = atkInfo;
	this->type = type;

}

ostream& operator<< (ostream& os, const attack& attack) {
	os << attack.name << " " << attack.type << "     DMG: " << to_string(attack.dmg) << " \n " <<
		" ' " << attack.atkInfo << " ' \n" ;
	return os;
}

attack::~attack() {

}