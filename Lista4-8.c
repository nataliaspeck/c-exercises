#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Dada uma sequ�ncia de n n�meros reais, determinar os n�meros que comp�em a
sequ�ncia e o n�mero de vezes que cada um deles ocorre na mesma. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	int seq[100], n, i, k, j, cont;
	printf ("Insira o n�mero de valores dentro da sua sequ�ncia:\n");
	scanf ("%d", &n);
	for (i = 0; i < n; i++){
		printf ("Insira o %d n�mero de sua sequ�ncia:\n", i+1);
		scanf ("%d", &seq[i]);
	} 
	for (j = 0; j < n; j++){
		for (k = 0; k < n; k++){
			if (seq[j] == seq[k]){
				cont++;
			}
		}
		printf ("O n�mero %d aparece %d vez(es) durante a sequ�ncia\n", seq[j], cont);
		cont = 0;
	} 
	system ("pause");
	return 0;
}
