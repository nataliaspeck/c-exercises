#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que aceite uma série de valores do usuário e os
armazene em um vetor. A seguir o programa chama a função menor( ),
passando como argumento o ponteiro e o tamanho do vetor. A função localiza
o menor valor armazenado no vetor e o retorna ao programa original. */

int menor(int *p, int indice){
	int i, vmenor;
	vmenor = p[0];
	for (i = 1; i < indice; i++){
		if (p[i] < vmenor){
			vmenor = p[i];
		}
	}
	return vmenor;
}

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int *ptr, vet[10], m, n;
	ptr = vet;
	for (n = 0; n < 10; n++){
		scanf("%d", &vet[n]); // scanf ("%d", &ptr[n]); scanf ("%d", ptr + n);
	}
	n = 10;
	m = menor(ptr, n); // ou menor(vet, n) ou menor (&vet[0], n)
	printf ("O menor valor é %d", m);
	system ("pause");
	return 0;
}

