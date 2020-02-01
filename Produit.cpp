/**
  * File:     Magasin.cpp
  * Author:   Haidar Younes
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  implementation of Product class
  */

#include "Produit.h"
#include <string>
#include <iostream>

Produit::Produit(std::string t, std::string de, int q, float p){
	m_title = t ;
	m_descr = de ;
	m_q = q ;
	m_prix = p ;
}

std::string Produit::getTITLE(){
	return m_title ; 
}

std::string Produit::getDESCRIPTION(){
	return m_descr ;
}

int Produit::getQUANTITY(){
	return m_q ;
}

float Produit::getPRICE(){
	return m_prix ;
}

void Produit::setQUANTITY(int c){
	m_q = c ;
}

std::ostream& operator << (std::ostream &output, Produit& obj){
	output << obj.m_title <<" | "<<obj.m_descr<<" | "<<obj.m_q<<" | "<<obj.m_prix <<"$"<< std::endl;
	return output;

}


