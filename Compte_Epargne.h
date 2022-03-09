#pragma once
#include "Compte.h"
namespace Banque {
	class Compte_Epargne : public Compte
	{
	public: 
		Compte_Epargne(Devise* solde, Client* p, double taux);
		void calculinteret();
		bool retirerArgent(Devise* montant) override;

	private: 
		double tauxInteret; 

	};
};

