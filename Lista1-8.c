#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	float denominador, numerador, soma = 0.0, n; 
	printf ("Insira um número inteiro positivo n:\n");
	scanf ("%f", &n);
	if (n <= 0.0){
		printf ("Erro! Insira um número inteiro positivo n:\n");
		scanf ("%d", &n);
	}
	for (denominador = n, numerador = 1; numerador <= n; denominador--, numerador++){
		soma = soma + (numerador/denominador);
	}
	printf ("Valor da soma: %.3f\n", soma);
	system ("pause");
	return 0;
}
