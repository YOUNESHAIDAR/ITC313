/**
  * File:     Magasin.h
  * Author:   Rachdad Badr
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Declaration of Magasin
  */

#ifndef _MAGASIN_H
#define _MAGASIN_H

#include <string>
#include <iostream>
#include <vector>
#include "Produit.h"
#include "Client.h"
#include "Commande.h"

class Magasin{
	public :
		Magasin() ;
		
		std::vector<Client*> getCLIENTS() const;
		friend std::ostream& operator<< (std::ostream &output, const Magasin& obj);
		
		void AddProduct( Produit prod);
		void ProductsDisplay() ;
		Produit* LookForProduct(std::string title) ;
		void SetProductQuantity(std::string a,int q);	

		void AddClient(Client cl);
		void ClientsDisplay();
		Client* LookForClient(int id) ;
		Client* LookForClient(std::string nom) ;

		void AddProdPanier(Client* c, Produit* prod, int quantity) ;
		void DelProdPanier(Client* c, std::string title) ;
		void ModProdQuantite(Client* c, std::string title, int quantite) ;

		void ValidOrder(Commande* com) ;
		void UpdateStatus(Commande& cm) ;
		void OrdersDisplay() ;
		void OrdersClientsDisplay(Client& cl) ;
/*	*/	
	private :
		std::vector<Produit*> m_products;
		std::vector<Client*> m_clients ;
		std::vector<Commande*> m_orders ;

};
#endif
