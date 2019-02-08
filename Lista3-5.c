#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa em C que solicite um n�mero do usu�rio e imprima: o
quadrado deste n�mero, seu fatorial e o somat�rio de 1 at� este n�mero. Os
tr�s diferentes c�lculos devem ser feitos dentro de fun��es e a impress�o do
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
