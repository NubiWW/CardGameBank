// CardGameBank (Refs and Pointers).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Card.h"
#include <fstream>
#include <algorithm>
#include "attack.h"
using namespace std;


Card* ReadCardDB() {
    Card * cardArr = new Card[4];
    ifstream inputFile("PKMNDatabase.txt"); 
    ifstream inputATK("ATKDatabase.txt");
    //check if file was opened
    if (!inputFile.is_open() && !inputATK.is_open()) {
        cerr << "file was not opened/not found" << endl;
        return cardArr; 
    }
    string line;
    std::cout << "file content: " << endl;
    string name, hp, type1, type2, stage, dexInfo, dexNum;
    attack TestATK1, TestATK2;
    int cardAmount = 0;
    while (getline(inputFile, line)) {
        //std::cout << line << endl;
        cardAmount += 1;
        std::cout << "Getting New Pokemon: " << endl;
        int totalChars = 0;
        int pos = 0; //starting position
        int end = line.find(", ", pos);
        name = line.substr(pos, end); //second parameter of substr is how many characters, not array position

        std::cout << name << endl;
        pos += end + 2;
        //totalChars = end + 2;

        end = line.find(", ", pos) - pos;
        hp = line.substr(pos, end);

        std::cout << hp << endl;
        pos += end + 2;

        end = line.find(", ", pos) - pos;
        type1 = line.substr(pos, end);

        std::cout << type1 << endl;
        pos += end + 2;

        end = line.find(", ", pos) - pos;
        type2 = line.substr(pos, end);

        std::cout << type2 << endl;
        pos += end + 2;

        end = line.find(", ", pos) - pos;
        stage = line.substr(pos, end);

        std::cout << stage << endl;
        pos += end + 2;

        end = line.find(", ", pos) - pos;
        dexInfo = line.substr(pos, end);

        std::cout << dexInfo << endl;
        pos += end + 2;

        end = line.find(", ", pos) - pos;
        dexNum = line.substr(pos, end);

        std::cout << dexNum << endl;
        pos += end + 2;

        while (getline(inputATK, line)) {
            int totalChars2 = 0;
            int pos2 = 0; //starting position
            int end2 = line.find(", ", pos2);
            TestATK1.name = line.substr(pos2, end2);

            std::cout << name << endl;
            pos2 += end2 + 2;
            totalChars2 = end2 + 2;

            end = line.find(", ", pos2) - pos2;
            string LineRead = line.substr(pos2, end2);
            int dmgInt = std::stoi(LineRead);
            TestATK1.dmg = dmgInt;

            std::cout << TestATK1.dmg << endl;
            pos2 += end2 + 2;
            totalChars2 = end2 + 2;

            end = line.find(", ", pos2) - pos2;
            TestATK1.atkInfo = line.substr(pos2, end2);

            std::cout << TestATK1.atkInfo << endl;
            pos2 += end2 + 2;
            totalChars2 = end2 + 2;

            end = line.find(", ", pos2) - pos2;
            TestATK1.type = line.substr(pos2, end2);

            std::cout << TestATK1.type << endl;
            pos2 += end2 + 2;
            totalChars2 = end2 + 2;





        }

        Card newCard = Card(name, stoi(hp), type1, type2, stage, TestATK1, dexInfo, stoi(dexNum));
    }
    inputFile.close();
    std::cout << "Data Gathered: " << endl;

    return cardArr;
}





int main()
{


    Card cardArr = *ReadCardDB();


    return 0;
    /*

    Card Cyndaquil = Card("Cyndaquil", 50, "FIRE", "basic", " 'the Fire Mouse Pokemon' ", 155);

    attack Ember = attack("Ember", 4, "The target is attacked with small flames. This may also leave the target with a burn.", "FIRE");
    attack Scratch = attack("Scratch", 3, "	Hard, pointed, sharp claws rake the target to inflict damage.", "NORMAL");

    Cyndaquil.setAttack1(&Ember);
    Cyndaquil.setAttack2(&Scratch);
    cout << Cyndaquil;

    Card Treecko = Card("Treecko", 40, "GRASS", "basic", " 'the Wood Gecko Pokemon.' ", 252);
    
    attack Leafage = attack("Leafage", 4, " The user attacks by pelting the target with leaves. ", "GRASS");
    attack Pound = attack("Pound", 3, " The target is physically pounded with a long tail, a foreleg, or the like. ", "NORMAL");

    Treecko.setAttack1(&Leafage);
    Treecko.setAttack2(&Pound);
    cout << Treecko;
    */
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
