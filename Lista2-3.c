#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um algoritmo que verifique se um número inteiro positivo é primo ou não. Caso o número seja zero ou negativo, 
//informar ao usuário uma mensagem de erro. 

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int num, i=1, cont=0;
	printf ("Insira um número inteiro positivo:\n");
	scanf ("%d", &num);
	if (num == 0 || num < 0){
		printf ("Erro! Insira outro número:\n");
		scanf ("%d", num);
	}
	while (i<=num){
		if (num%i==0){
		cont = cont + 1;
		}
	i = i + 1;
	}
	if (cont==2){
		printf ("É primo\n");
	} else {
		printf ("Não é primo\n");
			}
	system ("pause");
	return 0;
}
