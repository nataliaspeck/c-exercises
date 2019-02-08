#include <stdio.h>
#include <stdlib.h>

/* Faça um programa em C com uma função para calcular a média de 4
valores (parâmetros) e retorne o resultado ao programa principal. */

int main(int argc, char *argv[]) {
	int media1, soma, a, b, c, d;
	int media (int w, int x, int y, int z){
		return w + x + y + z;
	}
	printf ("Insira os valores, respectivamente:\n");
	scanf ("%d\n%d\n%d\n%d", &a, &b, &c, &d);
	media1 = media (a,b,c,d) / 4;
	printf ("Média = %d", media1);
	return 0;
}
