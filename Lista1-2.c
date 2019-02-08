#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
Exemplo: Para n=4 a saída dever ser 1,3,5,7.. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int n, cont, imp = 1;
	printf ("Insira um número inteiro positivo:\n");
	scanf ("%d", &n);
	printf ("\n");
	for (cont = 0; cont < n; cont++){
		printf ("%d", imp);
		imp = imp + 2;
	}
	printf ("\n");
	system ("pause");
	return 0;
}
