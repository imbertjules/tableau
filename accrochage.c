#include <stdio.h>
#include <stdlib.h>

int main()
{
	float hAccrochage;
	float hAccroche;
	float hTableau;
	float hVisse;

	hAccrochage = 0;
	hAccroche = 0;
	hTableau = 0;
	hVisse = 0;

	printf("quel est la hauteur d'accrochage ?\n");
	scanf("%f", &hAccrochage);
	printf("quel est la hauteur de l'accroche derriere le tableau (depuis le haut)? \n");
	scanf("%f", &hAccroche);
	printf("quel est la hauteur du tableau?\n");
	scanf("%f", &hTableau);

	hVisse = ((hTableau / 2) - hAccroche) + hAccrochage;

	printf("la hauteur d'accrochage est de %f\n", hVisse);
}
