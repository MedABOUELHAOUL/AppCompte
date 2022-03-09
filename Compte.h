#pragma once
#include"Client.h"
#include <vector> // classe template
#include"Operation.h"
class Devise;// pre-declaration
namespace  Banque {
class Compte
{
public: 
	Compte(); 
	Compte( Client* prop, Devise* solde);
	virtual bool retirerArgent(Devise* montant);
	void deposerArgent(Devise* montant);
	void consulterSolde() const; 
	bool transfererArgent(Compte *c, Devise* montant); 
	~Compte(); //destructeur 
private: 
	static	int cpt;
	const int numcompte; 
	Client* Prop;  // 
	Devise* solde;
	vector<Operation> historique;

	
};
};
