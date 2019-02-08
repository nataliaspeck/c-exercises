#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Sabe-se que um número da forma n³ é igual a soma de n ímpares consecutivos.
Exemplo: 1³= 1, 2³= 3+5, 3³= 7+9+11, 4³= 13+15+17+19,...
Dado m, determine os ímpares consecutivos cuja soma é igual a n³ para n assumindo valores de 1 a m. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int cont, numerador;
	float soma = 0.0, denominador = 1.0;
	for (cont = 1; cont < 10000; cont++, denominador++){
		soma = soma + (numerador/denominador);
		numerador = numerador * (-1);
	}
	printf ("Soma = %f", soma);
	system ("pause");
	return 0;
}
