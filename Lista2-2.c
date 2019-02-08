#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


/* Criar uma matriz, inicializar com valores de 1 a 100 e escrever a matriz
gerada utilizando ponteiros. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int i, vet[10][10], *p;
	p = (int *)vet;
	srand(time(NULL));
	for (i = 0; i < 100; i++){
		p[i] = rand()%100; // *(p+i) 
	}
	for (i = 0; i < 100; i++){
		printf ("Vetor[%d] = %d\n", i, *(p + i));
	}
	system ("pause");
	return 0;
}

