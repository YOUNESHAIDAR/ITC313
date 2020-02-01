#include<iostream>
using namespace std;
#include "Magasin.h"

int main(){
	int choix;
	do
	{
		cout<<"-------Bienvenue chez SwiftSTORE-----"<<endl;
	    cout<<"-----------------MENU----------------"<<endl;
		cout<<"1.Gestion des produits"<<endl;
		cout<<"2.Gestion des utilisateurs"<<endl;
		cout<<"3.Gestion des commandes"<<endl;
		cout<<"4.Quitter"<<endl;
		cout<<"Tapez votre choix"<<endl;
		cin>>choix;
		switch(choix)
		{
			case 1:
			       int choiix;
			       do
			       {
			       cout<<"----------Gestion des produits--------------"<<endl;
			       cout<<"11.Ajout d'un produit"<<endl;
			       cout<<"12.Afiichage des informations du produit"<<endl;
			       cout<<"13.Mise a jour des quantités"<<endl;
			       cout<<"14.Chercher un produit par son titre"<<endl;
			       cout<<"15.Quitter"<<endl;

			       cout<<"Tapez votre choix"<<endl;
			       cin>>choiix;
			       switch(choiix)
			       {
			        case 11: 
			        	string t = "" ;
			        	cout << "entrer le titre du produit : "<<endl ;
			        	cin >> t;
			        	string d = "" ;
			        	cout << "entrer la description du produit : " ;
			        	cin >> d >> endl ;
			        	int q = "" ;
			        	cout << "entrer la quantité du produit : " ;
			        	cin >> q >> endl ;
			        	float p = "" ;
			        	cout << "entrer le prix du produit : " ;
			        	cin >> p >> endl ;
			          	Produit p(t, d, q, p) ;
			          	SwiftSTORE.AddProduct(p) ;

			       	break;
			       	case 12:
			       		SwiftSTORE.ProductsDisplay() ;
			       	break;
			       	case 13:
			       		string t = "" ;
			        	cout << "entrer le titre du produit : "<<endl;
			        	cin >> t ;
			        	int q = "" ;
			        	cout << "entrer la nouvelle quantitée du produit : " ;
			        	cin >> q >> endl ;
			        	SwiftSTORE.SetProductQuantity(t, q) ;
			       	break;
			       	case 14:
			       	     string t ="";
			       	     cout<<"entrer le titre du produit à chercher"<<endl;
			       	     cin>>t;
			       	     SwiftSTORE.LookForProduct(t) ;
			       	break;
			       	case 15:
			       	break;
			       	default:
			       	break;
			       }
			   } while(choiix !=15);
			case 2:
			        int choiiix;
			        do
			        {
			        cout<<"----------Gestion des utilisateurs-----------"<<endl;
			        cout<<"21.Ajouter un client"<<endl;
			        cout<<"22.Affichage des informations du client"<<endl;
			        cout<<"23.Chercher un client par son id "<<endl;
			        cout<<"24.Chercher un client par son nom"<<endl;
			        cout<<"25.Ajouter un produit au panier"<<endl;
			        cout<<"26.Suprimmer un produit du panier"<<endl;
			        cout<<"27.Modifier la quantité d'un des produits de votre panier"<<endl;
			        cout<<"28.Quitter"<<endl;
			        cout<<"Tapez votre choix"<<endl;
			        cin>>choiiix;
			        switch(choiiix)
			        {
			        	case 21:
			        	        int id;
			        	        cout<<"Entrez votre identifiant :"<<endl;
			        	        cin>>id;
			        	        string n;
			        	        cout<<"Entrez votre nom :"<<endl;
			        	        cin>>n;
			        	        string p;
			        	        cout <<"Entrez votre prénom :"<<endl;
			        	        cin>>p;
			        	        Client c(id, n, p);
			        	        SwiftSTORE.AddClient(c);

			        	break;
			        	case 22:
			        	        SwiftSTORE.ClientsDisplay();
			        	break;
			        	case 23:
			        	        int id;
			        	        cout<<"Enter votre id :"<<endl;
			        	        cin>>id;
			        	        SwiftSTORE.LookForClient(id);
			        	case 24:
			        	        string n;
			        	        cout<<"Entrez votre nom"<<endl;
			        	        cin>>n;
			        	        SwiftSTORE.LookForClient(n);
			        	break;
			        	case 25:
			        	       string n;
			        	       cout<<"Entrez votre nom"<<endl;
			        	       cin>>n;
			        	       sting t;
			        	       cout<<"Entrez le titre de votre produit"<<endl;
			        	       cin>>t;
			        	       int q;
			        	       cout<<"Entrez la quantité que vous voulez"<<endl;
			        	       cin>>q;
			        	       SwiftSTORE.AddProdPanier(LookForClient(n), LookForProduct(t), q);
			        	case 26:
			        	       string n;
			        	       cout<<"Enrez votre nom"<<endl;
			        	       cin>>n;
			        	       string t;
			        	       cout<<"Entrer le titre du produit que vous voulez suprimé"<<endl;
			        	       cin>>t;
			        	       SwiftSTORE.DelProdPanier(LookForClient(n), t);
			        	case 27:
			        	        string n;
			        	        cout<<"Entrer votre nom"<<endl;
			        	        cin>>n;
			        	        string t;
			        	        cout<<"Entrez le titre votre produit"<<endl;
			        	        cin>>t;
			        	        int q;
			        	        cout<<"Entrer la nouvelle quantitée"<<endl;
			        	        cin>>q;
			        	        SwiftSTORE.ModProdQuantite(LookForClient(n), t, q);
			        	break;
			        	case 28:
			        	break;
			        	default:
			        	break;
			        }
			    } while(choiiix !=28);
			case 3:	
			         int choiiiix;
			         do
			         {	
			         cout<<"-----------Gestion des commandes--------------"<<endl;         
			         cout<<"31.Valider une commande"<<endl;
			         cout<<"32.Statut d'une commande"<<endl;
			         cout<<"33.Afficher les commandes du client"<<endl;
			         cout<<"34.Quitter"<<endl;
			         cout<<"Tapez votre choix"<<endl;
			         cin>>choiiiix;
			         switch(choiiiix)
			         {
			         	case 31:
			         	      string com;
			         	      cout<<"Entrer votre commande"<<endl;
			         	      cin>>com;
			         	      SwiftSTORE.ValidOrder(com);

			         	break;
			         	case 32:
			         	      string cm;
			         	      cout<<"Entrer votre commande"<<endl;
			         	      cin>> cm;
			         	      SwiftSTORE.UpdateStatus(cm);

			         	break;
			         	case 33:
			         	       string n;
			         	       cout<<"Entez votre nom"<<endl;
			         	       cin>> n;
			         	       SwiftSTORE.OrdersClientsDisplay(n);
			         	break;
			         	case 34:
			         	break;
			         	default:
			         	break;
			         }
			     } while(choiiiix !=34);
			case 4:
			break;
			default:
			break;
			

		}
	} while(choix !=4);
	return 0;











}		