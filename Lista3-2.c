#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa em C com uma fun��o para calcular a m�dia de 4
valores (par�metros) e retorne o resultado ao programa principal. */

int main(int argc, char *argv[]) {
	int media1, soma, a, b, c, d;
	int media (int w, int x, int y, int z){
		return w + x + y + z;
	}
	printf ("Insira os valores, respectivamente:\n");
	scanf ("%d\n%d\n%d\n%d", &a, &b, &c, &d);
	media1 = media (a,b,c,d) / 4;
	printf ("M�dia = %d", media1);
	return 0;
}
