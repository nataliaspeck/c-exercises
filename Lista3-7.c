#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que solicite do usu�rio tr�s valores: dia, m�s e ano. Crie
uma fun��o que indica se os valores digitados correspondem a uma data
v�lida. O programa principal deve emitir uma mensagem indicando se � v�lida
ou n�o. Escreva a fun��o acima do programa principal. */

int datar (int d, int m, int a){
	if (d > 31 || m > 12 || a > 2018){
		return 0;
	} else {
		return 1;
	}
}


int main(int argc, char *argv[]) {
	int dia, mes, ano, data;
	printf ("Insira dia, m�s e ano: ");
	scanf ("%d\n%d\n%d", &dia, &mes, &ano);
	if (datar (dia, mes, ano) == 0){
		printf ("Data inv�lida!");
	}else {
		printf ("Data v�lida");
	}
	return 0;
}


