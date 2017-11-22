// Idendity_Card.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Card.h"

const int TAILLE = 10;

int Card::NbCard = 0;

//void init(Card TCard[10]);
void init(Card *TCard);
void affiche(Card TCard[10]);

int main()
{
	

	Card TCard[TAILLE];

	init(&TCard[1]);
	affiche(TCard);

	cout << Card::NbCard << endl;

	system("pause");

    return 0;
}

void init(Card *TCard) {

	int i;
		TCard->modifier("Bibi", "Boubou", "fiefeiohf", 65321, "Strasbourg");
}

//passage par reference
/*void init(Card TCard[10]) {

	int i;
	for (i = 0; i < TAILLE; i++) {
		TCard[i].modifier("Bibi", "Boubou", "fiefeiohf", 65321, "Strasbourg");
	}
}*/

void affiche(Card TCard[10]) {

	int i;
	for (i = 0; i < TAILLE; i++) {
		TCard[i].affiche();
	}
}