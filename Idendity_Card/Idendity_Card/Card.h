#pragma once

//#include "stdafx.h"
//#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class Card
{
private:
	
	int id;
	string Nom;
	string Prenom;
	string Adresse;
	int CP;
	string Ville;

public:
	static int NbCard;
	Card();
	Card(string mNom, string mPrenom, string mAdresse, int mCP, string mVille);

	static void setNbCard();

	int getID();
	string getNom();
	string getPrenom();
	string getAdresse();
	int getCP();
	string getVille();

	void setID(int mID);
	void setNom(string mNom);
	void setPrenom(string mPrenom);
	void setAdresse(string mAdresse);
	void setCP(int mCP);
	void setVille(string mVille);

	void affiche();
	void modifier(string mNom, string mPrenom, string mAdresse, int mCP, string mVille);
	void supprimer();

	~Card();
};

