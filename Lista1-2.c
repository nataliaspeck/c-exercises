#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dado um n�mero inteiro positivo n, imprimir os n primeiros naturais �mpares.
Exemplo: Para n=4 a sa�da dever ser 1,3,5,7.. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int n, cont, imp = 1;
	printf ("Insira um n�mero inteiro positivo:\n");
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
