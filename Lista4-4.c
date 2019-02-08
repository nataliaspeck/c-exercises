#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Faça um algoritmo que leia uma string e determine se ela é palíndrome (igual se lida
de trás pra frente). */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	char string[1000], stringp[1000];
	int tam, i, ind, cont = 0, n;
	printf ("Insira uma cadeia de caracteres:\n");
	gets(string);
	tam = strlen (string); // Quantos caracteres existem, ignorando o '\0'
	ind = tam; // O índice do vetor da string será string[tam], porém os índices vão de 0 a tam - 1
	tam--;	
	for (i = 0; i < ind; i++, tam--){
		stringp [i] = string[tam]; // Criando uma string invertida
	}	
	if (strcmp(string, stringp) == 0){ //Comparando se as strings são iguais
		printf ("É palíndrome"); // Se a função retornar 0, são iguais
	}else{
		printf ("Não é palíndrome"); //Se a função retornar 1, são diferentes
	}
	system ("pause");
	return 0;
}

