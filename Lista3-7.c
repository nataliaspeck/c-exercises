#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que solicite do usuário três valores: dia, mês e ano. Crie
uma função que indica se os valores digitados correspondem a uma data
válida. O programa principal deve emitir uma mensagem indicando se é válida
ou não. Escreva a função acima do programa principal. */

int datar (int d, int m, int a){
	if (d > 31 || m > 12 || a > 2018){
		return 0;
	} else {
		return 1;
	}
}


int main(int argc, char *argv[]) {
	int dia, mes, ano, data;
	printf ("Insira dia, mês e ano: ");
	scanf ("%d\n%d\n%d", &dia, &mes, &ano);
	if (datar (dia, mes, ano) == 0){
		printf ("Data inválida!");
	}else {
		printf ("Data válida");
	}
	return 0;
}


