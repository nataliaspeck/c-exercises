#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


/* Criar um vetor, inicializar com valores de 1 a 10 e escrever o vetor
utilizando ponteiros. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int i, vet[10], *p;
	p = vet;
	srand(time(NULL));
	for (i = 0; i < 10; i++){
		*(p + i) = rand()%10; // p[i] // vet[i]
	}
	for (i = 0; i < 10; i++){
		printf ("Vetor[%d] = %d\n", i, *(p + i));
	}
	system ("pause");
	return 0;
}

