#pragma once
#include<iostream>
using namespace std;
class Client
{
public: 
	Client(); 
	Client(string n, string p, string a);
	void afficher() const;

private: 
	string nom; 
	string prenom;
	string addresse;
};

