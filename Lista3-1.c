#include <stdio.h>
#include <stdlib.h>

/* Faça um programa em C com uma função para calcular o quadrado de um
número e outra para calcular o cubo de um número. O número deve ser
passado com parâmetro e o resultado retornado ao programa principal. */

int main(int argc, char *argv[]) {
	int n, quad, cub;
	int quadrado (int x){
		return x*x;
	}
	int cubo (int z){
		return z*z*z;
	}
	printf ("Insira o número:\n");
	scanf ("%d", &n);
	cub = cubo (n);
	quad = quadrado(n);
	printf ("Quadrado: %d // Cubo: %d", quad, cub);
	return 0;
}
