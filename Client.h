/**
  * File:     Client.h
  * Author:   Rachdad Badr
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Declaration of Client
  */

#ifndef _CLIENT_H
#define _CLIENT_H


#include "Produit.h"

#include <string>
#include <vector>

class Client {
	public :
		Client(int id, std::string n, std::string p);
		int getID();
		std::string getNOM();
		std::string getPRENOM();
		std::vector<Produit*> getPANIER();
		void AddProductBasket(Produit* prod) ;
		void DelBasket();
		void SetQuantity(std::string k, int l);
		void DelProductBasket(std::string title);
		friend std::ostream& operator<< (std::ostream &output, Client& obj);
		

	private :
		int m_id ;
		std::string m_nom ;
		std::string m_prenom ;
		std::vector<Produit*> m_panier;

};
#endif
