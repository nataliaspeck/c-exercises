#include <stdio.h>
#include <stdlib.h>

/* Dados três números naturais, verificar se eles formam os lados de um triângulo
retângulo */

int main(int argc, char *argv[]) {
	int catop, catad, hip;
	printf ("Insira o cateto oposto, o cateto adjacente e a hipotenusa, respectivamente:\n");
	scanf ("%d\n%d\n%\n", &catop, &catad, &hip);
	if (catop*catop + catad*catad ==  hip*hip){
		printf ("É um triângula retângulo!");
	}else{
		printf ("Não é um triângulo retângulo!");
	}
	return 0;
}
