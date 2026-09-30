#include "banque.h"
#include <iostream>

using namespace std;

Banque::Banque()
{
	numero = 1;
	nom = "";
	prenom = "";
	adresse = "";
	solde = 0;
	decouvertMax = 800;
	debitMax = 1000;
}

void Banque::saisir()
{
	cout << "Nom : ";
	cin >> nom;

	cout << "Prenom : ";
	cin >> prenom;

	cout << "Adresse : ";
	cin >> adresse;

	cout << "Solde : ";
	cin >> solde;


}

int Banque::getNumero()
{
	return numero;
}

float Banque::getSolde()
{
	return solde;
}

float Banque::getDecouvert()
{
	if (solde < 0)
	{
		return -solde;
	}

	return 0;
}

float Banque::getDecouvertMax()
{
	return decouvertMax;
}

float Banque::getDebitMax()
{
	return debitMax;
}

void Banque::crediter(float montant)
{
	solde = solde + montant;
}

void Banque::debiter(float montant)
{
	if (montant <= debitMax)
	{
		if (solde - montant >= -decouvertMax)
		{
			solde = solde - montant;
		}
		else
		{
			cout << "Decouvert maximum depasse." << endl;
		}
	}
	else
	{
		cout << "Debit maximum depasse." << endl;
	}
}

int Banque::estADecouvert()
{
	if (solde < 0)
	{
		return 1;
	}

	return 0;
}

float Banque::debitAutorise()
{
	float montant;

	montant = solde + decouvertMax;

	if (montant > debitMax)
	{
		montant = debitMax;
	}

	return montant;
}

void Banque::afficher()
{
	cout << endl;
	cout << "----- COMPTE BANCAIRE -----" << endl;

	cout << "Numero : " << numero << endl;
	cout << "Nom : " << nom << endl;
	cout << "Prenom : " << prenom << endl;
	cout << "Adresse : " << adresse << endl;
	cout << "Solde : " << solde << " euros" << endl;
	cout << "Decouvert maximum : " << decouvertMax << " euros" << endl;
	cout << "Debit maximum : " << debitMax << " euros" << endl;
}




