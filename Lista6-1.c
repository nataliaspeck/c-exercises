#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva um programa fazendo o uso de struct's. Voc� dever� criar uma
struct chamada Ponto, contendo apenas a posi��o x e y (inteiros) do ponto.
Declare 2 pontos, leia a posi��o (coordenadas x e y) de cada um e calcule a
dist�ncia entre eles. Apresente no final a dist�ncia entre os dois pontos. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	struct ponto{
		int x;
		int y;
	};
	struct ponto coordenada;
	scanf ("%d", &coordenada.x);
	scanf ("%d", &coordenada.y);
	printf ("Diferen�a %d - %d = %d", coordenada.x, coordenada.y, coordenada.x - coordenada.y);
	system ("pause");
	return 0;
}

