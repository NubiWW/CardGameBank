#pragma once
#include <string>
using namespace std;
class attack
{
public :
	string name;
	int dmg;
	string atkInfo;
	string type;

	attack();
	attack(string name, int dmg, string atkInfo, string type);

	~attack();

	friend ostream& operator<< (ostream& os, const attack& attack);
};

