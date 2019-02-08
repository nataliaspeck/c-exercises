#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dadas duas matrizes reais Amxn e Bnxp, calcular o produto de A por B.. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int A[100][100], B[100][100], AxB[100][100];
	int m, n, i, k, a, b, h;
	printf ("Insira o número de linhas e de colunas da matriz A\n");
	scanf ("%d\n%d", &m, &n);
	for (i = 0; i < m; i++){
		for (k = 0; k < n; k++){
			printf ("Elemento %dx%d =  ", i, k);
			scanf ("%d", &A[i][k]);
		}
	}
	printf ("Insira o número de linhas e de colunas da matriz A\n");
	scanf ("%d\n%d", &a, &b);
	if (n != a){
		printf ("Não existe produto de A e B");
		system ("pause");
	}else{
		for (i = 0; i < a; i++){
			for (k = 0; k < b; k++){
			printf ("Elemento %dx%d =  ", i, k);
			scanf ("%d", &B[i][k]);
			}
		}
	}
	for (i = 0; i < m; i++){
		for (k = 0; k < n; k++){
			printf ("%d   ", A[i][k]);
		}
		printf ("\n");
	}
	for (i = 0; i < a; i++){
		for (k = 0; k < b; k++){
			printf ("%d   ", B[i][k]);
		}
		printf ("\n");
	}
	for (i = 0; i < m; i++){
		for (k = 0; k < b; k++){
			AxB[i][k] = 0;
			for (h = 0; h < m; h++){
				AxB[i][k] = AxB[i][k] + A[i][h] * B[h][k]; 	
			}	
		}
	}	
	system ("pause");
	return 0;
}

