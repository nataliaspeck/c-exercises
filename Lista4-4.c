#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Fa�a um algoritmo que leia uma string e determine se ela � pal�ndrome (igual se lida
de tr�s pra frente). */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	char string[1000], stringp[1000];
	int tam, i, ind, cont = 0, n;
	printf ("Insira uma cadeia de caracteres:\n");
	gets(string);
	tam = strlen (string); // Quantos caracteres existem, ignorando o '\0'
	ind = tam; // O �ndice do vetor da string ser� string[tam], por�m os �ndices v�o de 0 a tam - 1
	tam--;	
	for (i = 0; i < ind; i++, tam--){
		stringp [i] = string[tam]; // Criando uma string invertida
	}	
	if (strcmp(string, stringp) == 0){ //Comparando se as strings s�o iguais
		printf ("� pal�ndrome"); // Se a fun��o retornar 0, s�o iguais
	}else{
		printf ("N�o � pal�ndrome"); //Se a fun��o retornar 1, s�o diferentes
	}
	system ("pause");
	return 0;
}

