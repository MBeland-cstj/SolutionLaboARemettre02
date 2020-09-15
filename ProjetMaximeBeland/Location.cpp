//But : Le programme doit calculer le prix à payer pour une personne selon la durée et la distance du voyage
//Auteur : Maxime Béland
//Date : 17 septembre 2020


#include<iostream>

using namespace std;

float main()
{
	setlocale(LC_ALL, "");

	//Définition des variables :
	float	nombreJours, //Variable du nombre de jours que le voyage durera
			nombreLitre, //Variable du nombre litre utiliser lors du déplacement durant le voyage
			nombreKm, //Le nombre de kilomètres parcourus lors du voyage
			coutEssence, //Le cout de l'essence consommé lors du voyage
			coutLocation, //Le cout de la location de la voiture
			nbJours, //Duré du voyage en jour
			coutTotal; //Montant total d'argent à payer pour le voyage
		
	cout << "Combien de jour(s) allez-vous louer la voiture? "; //La console écrit la question à l'utilisateur
	cin >> nbJours; //L'utilisateur répond à la question en entrant une donnée

	cout << "Combien de Kilomètre(s) allez-vous parcourir? "; //La console écrit la question à l'utilisateur
	cin >> nombreKm; //L'utilisateur répond à la question en entrant une donnée

	nombreLitre = nombreKm * 0.076;  //Calcul du nombre de litre consommé
	coutEssence = nombreLitre * 1.25; //Calcul afin d'obtenir le cout total de l'essence
	coutLocation = nbJours * 45; //Calcul du cout de la location du véhicule selon le nombre de jours

	if (nombreKm / nbJours <= 250) //Si le nombre de kilomètres divisé par le nombre de jours est inférieur ou égal à 250 nous continuons dans cette fonction.
	{
		coutTotal = coutEssence + coutLocation; //Calcul du cout final
		cout << "Le cout total de votre voyage sera de " << coutTotal << "$"; //Affichage du message final avec le cout total du voyage
	}
	else //Sinon nous continuons dans la fonction ci-dessus.
	{
		float nbKmBonus = nombreKm / nbJours - 250; //Calcul du nombre de kilomètres dépassant le nombre de kilomètres offert.
		float coutKmBonus = nbKmBonus * 0.005; //Calcul du cout du nombre de kilomètres dépassant la limite offerte
		coutTotal = coutLocation + coutEssence + coutKmBonus; //Calcul du cout final
		cout << "Le cout total de votre voyage sera de " << coutTotal << "$"; //Affichage du message final avec le cout total du voyage
	}
		

}

