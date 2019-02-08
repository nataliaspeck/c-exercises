#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dizemos que uma matriz inteira Anxn � uma matriz de permuta��o se em cada linha
e em cada coluna houver n-1 elementos nulos e um �nico elemento igual a 1. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int matriz[100][100];
	int m, n, i, k;
	int sl = 0, sc = 0;
	printf ("Insira o n�mero de linhas e de colunas\n");
	printf ("O n�mero de linhas precisa ser igual o n�mero de colunas numa matriz quadrada\n");
	scanf ("%d\n%d", &m, &n);
	if (m != n){
		printf ("O n�mero de linhas precisa ser igual o n�mero de colunas:\n");
		printf ("Insira o n�mero de linhas e de colunas");
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
		printf ("Matriz de permuta��o!");
	}else{
		printf ("N�o � matriz de permuta��o");
	}
	system ("pause");
	return 0;
}

