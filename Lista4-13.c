#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dada uma matriz Amxn, imprimir o n�mero de linhas e o n�mero de colunas nulas
da matriz */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int matriz[100][100];
	int m, n;
	int i, k;
	int contl = 0, contc = 0;
	int contl1 = 0, contc1 = 0;
	printf ("Insira o n�mero de linhas e em seguida o n�mero de colunas:\n");
	scanf ("%d\n%d", &m, &n);
	for (i = 0; i < m; i++){
		for (k=0; k < n; k++){
			printf ("Elemento %dx%d =  ", i, k);
			scanf ("%d", &matriz[i][k]);
		}
	}
	for (i = 0; i < m; i++){
		for (k=0; k < n; k++){
			printf ("%d   ", matriz[i][k]);
		}
		printf ("\n");
	}
	for (i = 0; i < m; i++){
		for (k=0; k < n; k++){
			if (matriz[i][k] == 0){
				contl1 = contl1 + 1; 
			}
		}
		if (contl1 == n){
			contl = contl + 1;
		}
		contl1 = 0;
	}
	for (k = 0; k < n; k++){
		for (i = 0; i < m; i++){
			if (matriz[i][k] == 0){
				contc1 = contc1 + 1; 
			}
		}
		if (contc1 == m){
			contc = contc + 1;
		}
		contc1 = 0;
	}
	printf ("O n�mero de linhas nulas � de %d e de colunas nulas � de %d\n", contl, contc);
	system ("pause");
	return 0;
}

