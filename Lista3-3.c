#include <stdio.h>
#include <stdlib.h>

/* Leia 3 números, crie uma função para calcular e retornar a soma dos
números e outra função para encontrar e imprimir o maior número.. */

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
	printf ("Insira os 3 números: ");
	scanf ("%d\n%d\n%d", &a, &b, &c);
	soma = somar (a, b, c);
	maiorr = maior_num (a, b, c);
	printf ("Soma = %d e maior número = %d", soma, maiorr);
	return 0;
}
