// But : Exercice 1
// Auteur : Vincent Beaudry
// Date : 2020-09-11

#include <iostream>   //pour afficher à l'écran (o out output : sortie) ou (i in input : entrée)

int main()

{
	int number1; // Pour créez un espace en mémoire du nomre

	std::cout << " Veuillez entrer un nombre entier : ";

	std::cin >> number1; // La valeur que l'utilisateur entre

	if (number1 % 2 == 0)
	{
		std::cout << number1 << " est un nombre pair "; // Si le nombre est impair
	}
	else
	{

		std::cout << number1 << " est un nombre impair "; // Si le nombre est pair
	}
	



}


/*--Plan de test--

Si je rentre 2 le programme affichera que le nombre est pair

Si je rentre -3 le programme affichera que le nombre est impair

Si je rentre 456 le programme affichera que le nombre est pair

*/