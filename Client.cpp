#include "Client.h"

Client::Client()
{

}

Client::Client(string n, string p, string a)
{
	this->nom = n; 
	this->prenom = p; 
	this->addresse = a;
}

void Client::afficher() const
{
	cout << "nom: " << this->nom << endl; 
	cout << "prenom: " << this->prenom << endl;
	cout << "adresse: " << this->addresse << endl;
}
