#include <stdio.h>
#include <stdlib.h>

/* 1. Dada uma sequ�ncia de n n�meros, imprimi-la na ordem inversa � da leitura. */

int main(int argc, char *argv[]) {
	int seq[100], num, n;
	printf ("Quantos n�memos voc� deseja inserir?\n");
	scanf ("%d", &n);
	for (num = 0; num < n; num++){
		printf ("Insira o %d n�mero:\n", num + 1);
		scanf ("%d", &seq[num]);
	} 
	for (num = n - 1; num >= 0; num--){
		printf ("%d", seq[num]);
	}
	return 0;
}
