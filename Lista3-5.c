#include <stdio.h>
#include <stdlib.h>

/* Faça um programa em C que solicite um número do usuário e imprima: o
quadrado deste número, seu fatorial e o somatório de 1 até este número. Os
três diferentes cálculos devem ser feitos dentro de funções e a impressão do
resultado deve ser feita no programa principal.. */

int main(int argc, char *argv[]) {
	int n, fat, quadrado, soma;
	int quad (int a){
		return a * a;
	}
	int somatorio (int b){
		int somar = 0, cont, x;
		x = b;
		for (cont = 0; cont < b; cont++, x--){
			somar = somar + x;
		}
		return somar;
	}
	int fatorial (int c){
		int fator = 1, s;
		for (s = 1; s <= c; s++){
			fator = fator * s;
		}
		return fator;
	}
	printf ("Insira um valor:\n");
	scanf ("%d", &n);
	fat = fatorial (n);
	quadrado = quad (n);
	soma = somatorio (n);
	printf ("Fatorial: %d, quadrado: %d, soma = %d", fat, quadrado, soma);
	return 0;
}
