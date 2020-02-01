
#include "Magasin.h"
#include <iostream>

int main()
{

	Magasin EASYSTORE ;
	
	Produit PS3("PlayStation 3", "console de jeu", 120, 349.99) ;
	Produit MSI("msi", "o" , 100, 1699.99) ;
	Produit XBOX("xbox","Microsoft", 59, 320) ;
	Produit R6S("Rainbow 6 Siege", "jeu de tirs ", 350, 12) ;

	EASYSTORE.AddProduct(PS3) ;
	EASYSTORE.AddProduct(MSI) ;
	EASYSTORE.AddProduct(XBOX) ;
	EASYSTORE.AddProduct(R6S) ;

	
	Client Aniss(56149, "EL Hachimi", "Anis") ;
	Client Ela(56150, "Zofida", "Ela") ;

	EASYSTORE.AddClient(Aniss) ;
	EASYSTORE.AddClient(Ela) ;	
	
	EASYSTORE.AddProdPanier( &Aniss, &PS3, 3) ;
	EASYSTORE.AddProdPanier( &Aniss, &MSI, 3) ;
	EASYSTORE.AddProdPanier( &Aniss, &XBOX, 3) ;
	EASYSTORE.AddProdPanier( &Aniss, &R6S, 3) ;
	EASYSTORE.AddProdPanier( &Ela, &MSI, 2) ;
	EASYSTORE.AddProdPanier( &Ela, &PS3, 2) ;
	EASYSTORE.AddProdPanier( &Ela, &XBOX, 2) ;
	EASYSTORE.AddProdPanier( &Ela, &R6S, 2) ;	

	
	std::cout << EASYSTORE ;
	

	EASYSTORE.DelProdPanier(&Aniss, "xbox") ;
	EASYSTORE.ModProdQuantite(&Aniss, "msi", 1) ;
	EASYSTORE.ModProdQuantite(&Aniss, "Rainbow 6 Siege", 11) ;

	std::cout << EASYSTORE ;
	
	Commande OrderA(&Aniss) ;
	Commande OrderE(&Ela) ;
	EASYSTORE.ValidOrder(&OrderA) ;
	EASYSTORE.ValidOrder(&OrderE) ;

	//std::cout << EASYSTORE ;

	EASYSTORE.OrdersDisplay() ;

	
	EASYSTORE.UpdateStatus(OrderA) ;

	

	EASYSTORE.OrdersClientsDisplay(Aniss) ;


	return 0;
}

