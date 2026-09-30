#pragma once
#include <string>

using namespace std;

class Banque
{
private:
	int numero;
	string nom;
	string prenom;
	string adresse;
	float solde;
	float decouvertMax;
	float debitMax;

public:
	Banque();

	void saisir();
	void afficher();

	int getNumero();
	float getSolde();
	float getDecouvert();
	float getDecouvertMax();
	float getDebitMax();

	void crediter(float montant);
	void debiter(float montant);

	int estADecouvert();
	float debitAutorise();
};




