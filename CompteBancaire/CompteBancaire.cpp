// CompteBancaire.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "banque.h"

using namespace std;

int main()
{
	Banque compte;

	compte.saisir();

	compte.afficher();

	cout << endl;

	cout << "Numero : " << compte.getNumero() << endl;
	cout << "Solde : " << compte.getSolde() << " euros" << endl;
	cout << "Decouvert : " << compte.getDecouvert() << " euros" << endl;
	cout << "Decouvert maximum : " << compte.getDecouvertMax() << " euros" << endl;
	cout << "Debit maximum : " << compte.getDebitMax() << " euros" << endl;
	cout << "Debit autorise : " << compte.debitAutorise() << " euros" << endl;

	cout << "Compte a decouvert : " << compte.estADecouvert() << endl;

	cout << endl;

	cout << "Je credite 200 euros." << endl;
	compte.crediter(200);

	cout << "Nouveau solde : " << compte.getSolde() << " euros" << endl;

	cout << endl;

	cout << "Je debite 100 euros." << endl;
	compte.debiter(100);

	cout << "Nouveau solde : " << compte.getSolde() << " euros" << endl;
}





