#include <stdio.h>
#include <stdlib.h>

/* Dados dois n�meros inteiros positivos, determinar o m�ximo divisor comum entre
eles usando o algoritmo de Euclides */

int main(int argc, char *argv[]) {
	int resto, divisor, dividendo, a, b;
	printf ("O MDC entre quaid n�meros?");
	scanf ("%d\n%d", &a, &b);
	if (a > b){
		dividendo = a;
		divisor = b;
	} else {
		dividendo = b;
		divisor = a;
	}
	resto = dividendo % divisor;
	while (resto != 0){
		resto = dividendo % divisor;
		dividendo = divisor;	  
		divisor = resto;
	}
	printf ("O MDC entre %d e %d � = %d", a, b, dividendo);
	return 0;
}
