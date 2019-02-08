#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* DDada uma matriz real Amxn, verificar se existem elementos repetidos em A. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int matriz[100][100];
	int m, n, i, k;
	int a, b, rep=0;
	printf ("Insira o número de linhas e de colunas\n");
	scanf ("%d\n%d", &m, &n);
	for (i = 0; i < m; i++){
		for (k=0; k < n; k++){
			printf ("Elemento %dx%d =  ", i, k);
			scanf ("%d", &matriz[i][k]);
		}
	}
	for (i = 0; i < m; i++){
		for (k = 0; k < n; k++){
			printf ("%d   ", matriz[i][k]);
		}
		printf ("\n");
	}
	for (i = 0; i < m; i++){
		for (k=0; k < n; k++){
			for (a = 0; a < m; a++){
				for (b = 0; b < n; b++){
					if (i != a || k != b){
						if (matriz[i][k] == matriz[a][b]){
							rep = 1;
						}
					}
				}
			}
		}
	}
	if (rep == 1){
		printf ("Existem elementos repetidos");
	}else{
		printf ("Não existem elementos repetidos");
	}
	system ("pause");
	return 0;
}

