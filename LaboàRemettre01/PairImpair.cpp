// But : Exercice 1
// Auteur : Vincent Beaudry
// Date : 2020-09-11

#include <iostream>   //pour afficher à l'écran (o out output : sortie) ou (i in input : entrée)

int main()

{
	int number1; // FR : Pour créez un espace en mémoire du nomre

	std::cout << " Veuillez entrer un nombre entier : ";

	std::cin >> number1; // La valeur que l'utilisateur entre

	// KM : Explique pourquoi tu as recours à % et 2 et 0
	if (number1 % 2 == 0)
	{
		std::cout << number1 << " est un nombre pair "; // KM : Cohérence du commentaire : Si le nombre est impair
	}
	else
	{

		std::cout << number1 << " est un nombre impair "; //  KM : Cohérence du commentaire : Si le nombre est pair
	}
	



}

// KM : Très bien le plan de tests, valeurs diversifiées
/*--Plan de test--

Si je rentre 2 le programme affichera que le nombre est pair

Si je rentre -3 le programme affichera que le nombre est impair

Si je rentre 456 le programme affichera que le nombre est pair

*/
