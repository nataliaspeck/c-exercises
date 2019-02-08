#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Crie um programa simples que:
a) Aloque e desaloque espa�o para um inteiro
b) Aloque e desaloque espa�o para um caractere
c) Aloque e desaloque espa�o para 10 floats, inicializando aleatoriamente e mostrando o
conte�do do espa�o alocado
d) Aloque e desaloque espa�o para 50 caracteres, inicializando com caracteres aleat�rios */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int *pi, i;
	float *pf;
	char *pc, *pc1;
	pi = (int *)malloc(sizeof(int));
	pc = (char *)malloc(sizeof(char));
	pc1 = (char *)malloc(50 * sizeof(char));
	pf = (float *)malloc(10 * sizeof(float));
	srand(time(NULL));
	for (i = 0; i < 10; i++){
		pf[i] = rand()%100;
		printf ("%f\n", pf[i]);
	}
	for (i = 0; i < 50; i++){
		pc1[i] = rand()%100;
	}
	free(pi);
	free(pf);
	free(pc);
	free(pc1);
	system ("pause");
	return 0;
}

