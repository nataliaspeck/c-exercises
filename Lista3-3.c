#include <stdio.h>
#include <stdlib.h>

/* Leia 3 n�meros, crie uma fun��o para calcular e retornar a soma dos
n�meros e outra fun��o para encontrar e imprimir o maior n�mero.. */

int main(int argc, char *argv[]) {
	int a, b, c, soma, maiorr;
	int somar (int x, int y, int z){
		return x + y + z;
	}
	int maior_num (int q, int w, int e){
		int maior;
		maior = q;
		if (w > maior){
			maior = w;
		}
		if (e > maior) {
			maior = e;
			}
		return maior;
	}
	printf ("Insira os 3 n�meros: ");
	scanf ("%d\n%d\n%d", &a, &b, &c);
	soma = somar (a, b, c);
	maiorr = maior_num (a, b, c);
	printf ("Soma = %d e maior n�mero = %d", soma, maiorr);
	return 0;
}
