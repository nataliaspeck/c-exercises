#include <stdio.h>
#include <stdlib.h>

/* Dizemos que um número i é congruente módulo m a j se i % m = j % m.

Exemplo: 35 é congruente módulo 4 a 39, pois
35 % 4 = 3 = 39 % 4.

Dados inteiros positivos n, j e m, imprimir os n primeiros naturais congruentes
a j módulo m. */

int main(int argc, char *argv[]) {
	int n, j , m, i=0, rest1, rest2;
	printf ("Insira 'n', 'j' e 'm' respectivamente:\n");
	scanf ("%d\n%d\n%\n", &n, &j, &m);
	while (i<n){
		rest1 = i % m;
		rest2 = j % m;
		if ( rest1 == rest2) {
			printf ("O número %d é congruente módulo %d a %d", i, m,j);
		}
		i++;
		rest1 = 0;
		rest2 = 0;
	}
	return 0;
}
