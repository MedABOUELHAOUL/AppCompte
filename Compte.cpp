#include "Compte.h"
#include <iostream>
#include"Devise.h"
using namespace Banque;
int Compte::cpt = 0; //

Banque::Compte::Compte(): 
numcompte (++Compte::cpt)
{
  
    this->Prop = 0;
    this->solde = 0;
   
}

Banque::Compte::Compte(Client *prop, Devise* solde):
      numcompte(++Compte::cpt)
{
    this->Prop = prop;
    this->solde = solde;
    this->historique = vector<Operation>();
}

bool Banque::Compte::retirerArgent(Devise* montant)
{
    if (*(this->solde)>= *montant) {
      // if (this->solde->operator>=( *montant)) {
        *(this->solde) = *(this->solde) - *(montant);
        Operation op("-", montant);
        this->historique.push_back(op);
        return true;
    }
    return false;
}

void Banque::Compte::deposerArgent(Devise* montant)
{
   *(this->solde) = *(this->solde) + *montant;
   Operation op("+", montant);
   this->historique.push_back(op);
}

void Banque::Compte::consulterSolde() const
{
    std::cout << "le compte est: " << this->numcompte<< std::endl;
    std::cout << "le solde est: ";
    this->solde->afficher();

}

bool Banque::Compte::transfererArgent(Compte*c, Devise* montant)
{
    if (this->retirerArgent(montant) == true) {
        c->deposerArgent(montant);
        return true;
    }
    return false;
}

Banque::Compte::~Compte()
{
    std::cout << "destructeur" << std::endl;
    Compte::cpt--;
   
}
