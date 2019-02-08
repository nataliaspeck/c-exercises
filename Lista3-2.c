#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Escreva um programa que lê strings do teclado até que duas strings iguais sejam
digitadas consecutivamente. A saída é a concatenação de todas as strings lidas e os
tamanhos da maior e da menor. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	char *string, *string2, *stringcat, *stringult;
	int menor, maior, tam;
	stringult = (char *)malloc(100 * sizeof(char));
	stringcat = (char *)malloc(100 * sizeof(char));
	string2 = (char *)malloc(100 * sizeof(char));
	printf ("Qual tamanho da string? ");
	scanf ("%d", &tam);
	string2 = (char *)realloc(string2, (tam+1) * sizeof(char));
	fflush(stdin);
	fgets(string2, tam+1, stdin);
	menor = strlen(string2);
	maior = strlen(string2);
	stringcat = (char *)realloc(stringcat, sizeof(string2));
	strcat(stringcat, string2);
	while(1){
		fflush(stdin);
		strcpy(stringult, string2);
		printf ("Qual tamanho da string? ");
		scanf ("%d", &tam);
		string2 = (char *)realloc(string2, (tam+1) * sizeof(char));
		fflush(stdin);
		fgets(string2, tam+1, stdin);
		if (strlen(string2) < menor){
			menor = strlen(string2);
		}
		if (strlen(string2) > maior){
			maior = strlen(string2);
		}
		stringcat = (char *)realloc(stringcat, sizeof(stringcat) + sizeof(string2));
		strcat(stringcat, string2);
		if (strcmp(stringult, string2) == 0){
			break;
		}
	};
	puts(stringcat);
	printf ("Menor %d \n Maior %d \n", menor, maior);
	system ("pause");
	return 0;
}

