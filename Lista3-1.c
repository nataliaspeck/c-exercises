#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa em C com uma fun��o para calcular o quadrado de um
n�mero e outra para calcular o cubo de um n�mero. O n�mero deve ser
passado com par�metro e o resultado retornado ao programa principal. */

int main(int argc, char *argv[]) {
	int n, quad, cub;
	int quadrado (int x){
		return x*x;
	}
	int cubo (int z){
		return z*z*z;
	}
	printf ("Insira o n�mero:\n");
	scanf ("%d", &n);
	cub = cubo (n);
	quad = quadrado(n);
	printf ("Quadrado: %d // Cubo: %d", quad, cub);
	return 0;
}
