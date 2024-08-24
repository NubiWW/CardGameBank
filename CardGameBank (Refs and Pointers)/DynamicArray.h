#pragma once
#include <iostream> 
#include <string>
#include "Card.h"
#include <queue>
using namespace std;

class DynamicArray
{
private: 
	queue<Card*> CardDeck;
	// queue<string> TestQ;
	int size;
	int capacity;

public:
	int size;
	int capacity;

	DynamicArray() {
		capacity = 1;
		size = 0;
		CardDeck.push(new Card);
		// TestQ.push("string");
	}

	DynamicArray(int capacity) {
		this -> capacity = capacity;
		size = 0;
		CardDeck.push(new Card);
	}

	int getSize() {
		return size;
	}
	
	int getCapacity() {
		return capacity;
	}


	int setSize(int size) {
		this -> size = size; //swap around other way if not working
	}

	int setCapacity(int capacity) {
		this -> capacity = size; //same here
	}



	/*
	void GrowArray() {
		Card* tempArray = new Card[capacity * 2];
		capacity = capacity * 2;
		for (int i = 0; i < size; i++) {
			tempArray[i] = CardDeck[i];
		}

		delete[] CardDeck;
		CardDeck = tempArray;

	}
	*/

	/*
	void ShrinkArray() {
		Card* tempArray = new Card[capacity / 2];
		capacity = capacity / 2;
		for (int i = 0; i < size; i++) {
			tempArray[i] = CardDeck[i];
		}

		delete[] CardDeck;
		CardDeck = tempArray;

	}

	*/

	/*
	void PushBackArray(Card value) {
		if (size == capacity) {
			GrowArray();
		}

		CardDeck[size] = value;
		size += 1;

	}

	void PopBackArray() {
		CardDeck[size - 1] = NULL; //fix this next session
		size--;
		if (size == capacity / 2) {
			ShrinkArray();
		}

	}

	*/


};

