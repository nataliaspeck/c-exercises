#include <stdio.h>
#include <stdlib.h>

/* 1. Dada uma sequência de n números, imprimi-la na ordem inversa à da leitura. */

int main(int argc, char *argv[]) {
	int seq[100], num, n;
	printf ("Quantos númemos você deseja inserir?\n");
	scanf ("%d", &n);
	for (num = 0; num < n; num++){
		printf ("Insira o %d número:\n", num + 1);
		scanf ("%d", &seq[num]);
	} 
	for (num = n - 1; num >= 0; num--){
		printf ("%d", seq[num]);
	}
	return 0;
}
