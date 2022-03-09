#pragma once
#include<iostream>
class Devise
{
public: 
	Devise(double val);
	bool operator>=(const Devise& d)const;
	Devise operator-(const Devise& d);
	Devise operator+(const Devise& d);
	void afficher() const;
private: 
	double valeur;
};

