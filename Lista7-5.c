#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva um programa que abra um arquivo texto e conte o número de
caracteres presentes nele. Imprima o número de caracteres na tela. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	FILE *arq;
	char ch;
	int cont = 0;
	arq = fopen("arq.txt", "r");
	while(getc(arq) != EOF){
		cont++;
	}
	fclose(arq);
	printf ("%d", cont);
	system ("pause");
	return 0;
}

