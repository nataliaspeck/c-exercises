#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Leia uma string FONTE e uma segunda string ALVO. Faça um algoritmo que conte
quantas vezes ALVO aparece em FONTE. Exemplo: */

int main(int argc, char *argv[]) {
	system ("color 0a");
	char fonte[1000], alvo[1000];
	int i, k, j, cont = 0, contp = 0;
	printf ("Insira uma string fonte:\n");
	gets(fonte); 
	printf ("Insira uma string alvo:\n");
	gets(alvo);
	for (i = 0; i < strlen (fonte); i++){
		if (fonte[i] == alvo [0]){
			for (j = i, k = 0; k < strlen (alvo); j++, k++){
				if (fonte[j] == alvo[k]){
					cont++; 
				}
			}
				if (cont == strlen (alvo)){
					contp = contp + 1;
				}
		}
		cont = 0; 
	}
	printf ("Alvo aparece %d vezes em fonte", contp);
	system ("pause");
	return 0;
}
