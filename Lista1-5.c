#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dado um natural n, determine o n�mero harm�nico Hn definido por:*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int x, denominador = 1, cont;
	float soma = 0;
	printf ("Insira um n�mero inteiro positivo:\n");
	scanf ("%d", &x);
	if (x<=0){
		printf ("ERRO!Insira um n�mero inteiro positivo:\n");
		scanf ("%d", &x);
	}
	for (cont = 0; cont < x; cont++){
		soma = soma + (1.0/denominador);
		denominador++;
	}
	printf ("N�mero harm�nico: %.2f\n", soma);
	system ("pause");
	return 0;
}

