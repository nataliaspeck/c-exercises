#include <stdio.h>
#include <stdlib.h>

/* 3. Faça um algoritmo que leia uma string e conte a quantidade de vogais. */

int main(int argc, char *argv[]) {
	char string[100], vogais[5] = {'a', 'e', 'i', 'o', 'u'}, vogaism[5] = {'A', 'B', 'C', 'D', 'E'};
	int n = 0, i, contvog=0;
	printf ("Insira uma cadeia de caracteres:\n");
	gets (string);
	while (string[n] != '\0'){
		for (i = 0; i < 5; i++){
			if (string[n] == vogais[i] || string[n] == vogaism [i]){
				contvog = contvog + 1;
			}
		}
		n++;
	}
	printf ("O número de vogais é %d", contvog);
	return 0;
}
