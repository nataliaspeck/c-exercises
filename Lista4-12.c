#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dizemos que uma matriz inteira Anxn é uma matriz de permutação se em cada linha
e em cada coluna houver n-1 elementos nulos e um único elemento igual a 1. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int matriz[100][100];
	int m, n, i, k;
	int sl = 0, sc = 0;
	printf ("Insira o número de linhas e de colunas\n");
	printf ("O número de linhas precisa ser igual o número de colunas numa matriz quadrada\n");
	scanf ("%d\n%d", &m, &n);
	if (m != n){
		printf ("O número de linhas precisa ser igual o número de colunas:\n");
		printf ("Insira o número de linhas e de colunas");
		scanf ("%d\n%d", &m, &n);
	}
	for (i = 0; i < m; i++){
		for (k=0; k < n; k++){
			printf ("Elemento %dx%d =  ", i, k);
			scanf ("%d", &matriz[i][k]);
		}
	}
	for (i = 0; i < m; i++){
		for (k=0; k < n; k++){
			sl = sl + matriz[i][k];
		}
	}
	sl = sl/m;
	for (k=0; k < n; k++){
		for (i = 0; i < m; i++){
			sc = sc + matriz[i][k];
		}
	}
	sc = sc/n;
	for (i = 0; i < m; i++){
		for (k=0; k < n; k++){
			printf ("%d   ", matriz[i][k]);
		}
		printf ("\n");
	}
	if (sl == 1 && sc == 1){
		printf ("Matriz de permutação!");
	}else{
		printf ("Não é matriz de permutação");
	}
	system ("pause");
	return 0;
}

