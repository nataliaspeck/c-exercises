#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Dada uma sequência de n números reais, determinar os números que compõem a
sequência e o número de vezes que cada um deles ocorre na mesma. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	int seq[100], n, i, k, j, cont;
	printf ("Insira o número de valores dentro da sua sequência:\n");
	scanf ("%d", &n);
	for (i = 0; i < n; i++){
		printf ("Insira o %d número de sua sequência:\n", i+1);
		scanf ("%d", &seq[i]);
	} 
	for (j = 0; j < n; j++){
		for (k = 0; k < n; k++){
			if (seq[j] == seq[k]){
				cont++;
			}
		}
		printf ("O número %d aparece %d vez(es) durante a sequência\n", seq[j], cont);
		cont = 0;
	} 
	system ("pause");
	return 0;
}
