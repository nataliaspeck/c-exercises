#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fa�a um algoritmo que verifique se um n�mero inteiro positivo � primo ou n�o. Caso o n�mero seja zero ou negativo, 
//informar ao usu�rio uma mensagem de erro. 

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int num, i=1, cont=0;
	printf ("Insira um n�mero inteiro positivo:\n");
	scanf ("%d", &num);
	if (num == 0 || num < 0){
		printf ("Erro! Insira outro n�mero:\n");
		scanf ("%d", num);
	}
	while (i<=num){
		if (num%i==0){
		cont = cont + 1;
		}
	i = i + 1;
	}
	if (cont==2){
		printf ("� primo\n");
	} else {
		printf ("N�o � primo\n");
			}
	system ("pause");
	return 0;
}
