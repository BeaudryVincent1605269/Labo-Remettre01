// But : Exercice02
// Auteur : Vincent Beaudry
// Date : 2020-09-11

#include <iostream>   //pour afficher à l'écran (o out output : sortie) ou (i in input : entrée)
using namespace std;
int main()
{

	setlocale(LC_ALL, ""); // Pour afficher les accents dans la console

	int nb1;

	std::cout << " Veuillez entrer un nombre entier à 5 chiffres : ";
	std::cin >> nb1;

	
	if (nb1 > 9999 && nb1 < 100000)              // && signifie "et" pour inclure les deux condition.
	
	{
		std::cout << nb1 / 10000 << std::endl;   // Le nombre rentrer sera diviser par 10000 l'ordinateur affichera donc le premier chiffre du nombre.
		nb1 = nb1 % 10000;                                                                                                // % Sert à ce que le programme n'affiche pas le restant du nombre diviser.
		std::cout << nb1 / 1000 << std::endl;    // Le nombre rentrer sera diviser par 1000 l'ordinateur affichera donc le premier chiffre du nombre.
		nb1 = nb1 % 1000;                                                                                                 // % Sert à ce que le programme n'affiche pas le restant du nombre diviser.
		std::cout << nb1 / 100 << std::endl;     // Le nombre rentrer sera diviser par 100 l'ordinateur affichera donc le premier chiffre du nombre.
		nb1 = nb1 % 100;                                                                                                  // % Sert à ce que le programme n'affiche pas le restant du nombre diviser.
		std::cout << nb1 / 10 << std::endl;      // Le nombre rentrer sera diviser par 10 l'ordinateur affichera donc le premier chiffre du nombre.
		nb1 = nb1 % 10;                                                                                                   // % Sert à ce que le programme n'affiche pas le restant du nombre diviser.
		std::cout << nb1 << std::endl;           // Permet à ce que le dernier chiffre du nombre s'affiche. 
		
	} 
	

	else
	{
		std::cout << " Ce nombre ne contient pas 5 chiffres. ";
	}



	/* Plan de test
	* Si je rentre 2 l'ordianteur dira que ce nombre ne contient pas 5 chiffres.
	* 
	* Si je rentre 12345 L'ordianteur affichera :
	* 1
	* 2
	* 3
	* 4
	* 5
	*/


}