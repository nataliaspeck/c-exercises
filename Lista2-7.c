#include <stdio.h>
#include <stdlib.h>

/* Dados tr�s n�meros naturais, verificar se eles formam os lados de um tri�ngulo
ret�ngulo */

int main(int argc, char *argv[]) {
	int catop, catad, hip;
	printf ("Insira o cateto oposto, o cateto adjacente e a hipotenusa, respectivamente:\n");
	scanf ("%d\n%d\n%\n", &catop, &catad, &hip);
	if (catop*catop + catad*catad ==  hip*hip){
		printf ("� um tri�ngula ret�ngulo!");
	}else{
		printf ("N�o � um tri�ngulo ret�ngulo!");
	}
	return 0;
}
