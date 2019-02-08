#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva um programa fazendo o uso de struct's. Você deverá criar uma
struct chamada Ponto, contendo apenas a posição x e y (inteiros) do ponto.
Declare 2 pontos, leia a posição (coordenadas x e y) de cada um e calcule a
distância entre eles. Apresente no final a distância entre os dois pontos. */

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
	printf ("Diferença %d - %d = %d", coordenada.x, coordenada.y, coordenada.x - coordenada.y);
	system ("pause");
	return 0;
}

