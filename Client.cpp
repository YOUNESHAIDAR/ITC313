/**
  * File:     Client.cpp
  * Author:   Rachdad Badr
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  implementation of Client class
  */

#include "Client.h"
#include <iostream>
#include <string>



Client::Client(int id, std::string n, std::string p){
	m_id = id ;
	m_nom = n ;
	m_prenom = p ;
}

std::ostream& operator << (std::ostream &output, Client& obj)
{
	std::cout << "-----------------------------Client : -------------------------------------\n" ;
	output <<"      ID : "<< obj.m_id <<"    |         Nom et Prénom :  "<< obj.m_nom <<" "<<obj.m_prenom << std::endl ;
	

	std::cout << "-----------------------------Panier : -------------------------------------\n" ;

	output << "vous avez " << obj.m_panier.size() << " articles dans votre panier " << std::endl;
	for(Produit* pr: obj.m_panier )
	{
		output << *pr << std::endl;
	}
return output;
}


int Client::getID(){
	return m_id;
}

std::string Client::getNOM(){
	return m_nom;
}

std::string Client::getPRENOM(){
	return m_prenom;
}

std::vector<Produit*> Client::getPANIER(){
	return m_panier;
}

void Client::AddProductBasket(Produit* prod)
{

	Produit *pr = new Produit(prod->getTITLE(), prod->getDESCRIPTION(), prod->getQUANTITY(), prod->getPRICE()) ;
	m_panier.push_back(pr);
}

void Client::DelBasket(){
	m_panier.clear() ;
}
void Client::SetQuantity(std::string k, int quantite){

	int o = m_panier.size(); 
	
	for(int i=0;i<o;i++){
		
		if ((m_panier.at(i))->getTITLE() == k){

			m_panier.at(i)->setQUANTITY(quantite) ;
			std::cout << *m_panier.at(i) ;
		}
	}

}

void Client::DelProductBasket(std::string title){
	
	int o = m_panier.size(); 
	
	for(int i=0;i<o;i++){
		
		if (m_panier.at(i)->getTITLE() == title){
			m_panier.erase(m_panier.begin()+i) ;
			std::cout << title << " Erased!\n" ;
			break ;
		}
	}
	
}

