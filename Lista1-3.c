#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dados um inteiro x e um inteiro n�o-negativo n, calcular x
n. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int x, n, pot, cont;
	printf ("Insira um n�mero inteiro positivo para ser a base:\n");
	scanf ("%d", &x);
	if (x<=0){
		printf ("ERRO! nsira um n�mero inteiro positivo:\n");
		scanf ("%d", &x);
	}
	printf ("Insira um n�mero inteiro positivo para ser o expoente:\n");
	scanf ("%d", &n);
	if (n<=0){
		printf ("ERRO! nsira um n�mero inteiro positivo:\n");
		scanf ("%d", &n);
	}
	printf ("\n");
	pot = x;
	for (cont = 0; cont < (n - 1); cont++){
		pot = pot * x;
	}
	printf ("Potencia: %d\n", pot);
	system ("pause");
	return 0;
}
