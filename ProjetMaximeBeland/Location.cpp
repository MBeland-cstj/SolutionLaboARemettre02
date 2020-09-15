//But : Le programme doit calculer le prix � payer pour une personne selon la dur�e et la distance du voyage
//Auteur : Maxime B�land
//Date : 17 septembre 2020


#include<iostream>

using namespace std;

float main()
{
	setlocale(LC_ALL, "");

	//D�finition des variables :
	float	nombreJours, //Variable du nombre de jours que le voyage durera
			nombreLitre, //Variable du nombre litre utiliser lors du d�placement durant le voyage
			nombreKm, //Le nombre de kilom�tres parcourus lors du voyage
			coutEssence, //Le cout de l'essence consomm� lors du voyage
			coutLocation, //Le cout de la location de la voiture
			nbJours, //Dur� du voyage en jour
			coutTotal; //Montant total d'argent � payer pour le voyage
		
	cout << "Combien de jour(s) allez-vous louer la voiture? "; //La console �crit la question � l'utilisateur
	cin >> nbJours; //L'utilisateur r�pond � la question en entrant une donn�e

	cout << "Combien de Kilom�tre(s) allez-vous parcourir? "; //La console �crit la question � l'utilisateur
	cin >> nombreKm; //L'utilisateur r�pond � la question en entrant une donn�e

	nombreLitre = nombreKm * 0.076;  //Calcul du nombre de litre consomm�
	coutEssence = nombreLitre * 1.25; //Calcul afin d'obtenir le cout total de l'essence
	coutLocation = nbJours * 45; //Calcul du cout de la location du v�hicule selon le nombre de jours

	if (nombreKm / nbJours <= 250) //Si le nombre de kilom�tres divis� par le nombre de jours est inf�rieur ou �gal � 250 nous continuons dans cette fonction.
	{
		coutTotal = coutEssence + coutLocation; //Calcul du cout final
		cout << "Le cout total de votre voyage sera de " << coutTotal << "$"; //Affichage du message final avec le cout total du voyage
	}
	else //Sinon nous continuons dans la fonction ci-dessus.
	{
		float nbKmBonus = nombreKm / nbJours - 250; //Calcul du nombre de kilom�tres d�passant le nombre de kilom�tres offert.
		float coutKmBonus = nbKmBonus * 0.005; //Calcul du cout du nombre de kilom�tres d�passant la limite offerte
		coutTotal = coutLocation + coutEssence + coutKmBonus; //Calcul du cout final
		cout << "Le cout total de votre voyage sera de " << coutTotal << "$"; //Affichage du message final avec le cout total du voyage
	}
		

}

