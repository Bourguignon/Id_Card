#include "stdafx.h"
#include "Card.h"


Card::Card()
{
	Card::setNbCard();
	Card::id = Card::NbCard;
}

Card::Card(string mNom,string mPrenom,string mAdresse, int mCP,string mVille)
{
	Card::setNbCard();
	Card::id = Card::NbCard;
	Card::Nom = mNom;
	Card::Prenom = mPrenom;
	Card::Adresse = mAdresse;
	Card::CP = mCP;
	Card::Ville = mVille;
}

void Card::setNbCard()
{
	Card::NbCard += 1;
}


int Card::getID()
{
	return Card::id;
}

string Card::getNom()
{
	return Card::Nom;
}

string Card::getPrenom()
{
	return Card::Prenom;
}

string Card::getAdresse()
{
	return Card::Adresse;
}

int Card::getCP()
{
	return Card::CP;
}

string Card::getVille()
{
	return Card::Ville;
}



void Card::setID(int mID)
{
	Card::id = mID;
}

void Card::setNom(string mNom)
{
	Card::Nom = mNom;
}

void Card::setPrenom(string mPrenom)
{
	Card::Prenom = mPrenom;
}

void Card::setAdresse(string mAdresse)
{
	Card::Adresse = mAdresse;
}

void Card::setCP(int mCP)
{
	Card::CP = mCP;
}

void Card::setVille(string mVille)
{
	Card::Ville = mVille;
}



void Card::affiche()
{
	cout << "Id : " << Card::id << endl;
	cout << "Nom : " << Card::Nom << endl;
	cout << "Prenom : " << Card::Prenom << endl;
	cout << "Adresse : " << Card::Adresse << endl;
	cout << "Code Postal : " << Card::CP << endl;
	cout << "Ville : " << Card::Ville << endl;
}

void Card::modifier(string mNom, string mPrenom, string mAdresse, int mCP, string mVille)
{
	Card::Nom = mNom;
	Card::Prenom = mPrenom;
	Card::Adresse = mAdresse;
	Card::CP = mCP;
	Card::Ville = mVille;
}

void Card::supprimer()
{
	Card::~Card();
}


Card::~Card()
{
	cout << "Instance supprimer" << endl;
}
