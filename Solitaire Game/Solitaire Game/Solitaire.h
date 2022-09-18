#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;

class Solitaire
{
	struct Node
	{
		string cardName;
		Node* forwardLink;
	};

private:
	Node* top;
	bool cardFacing;
public:
	Solitaire();
	bool isFull();
	bool isEmpty();
	void push(string cardName);
	Node* peek(string name);
	void pop(string name);
	void printBoard();

};

// classes
		//3 class	card storing the values and does valid checks for playing, deck for the piles, player class for name and score
//





