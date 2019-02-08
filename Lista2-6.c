#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa para elevar um número ao cubo.
a) utilize passagem de parâmetro por valor
b) utilize passagem de parâmetro por referência */

int quadv(int n){
	return n*n*n;
}

int quadr(int *p){
	return (*p)*(*p)*(*p);
}

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int num, *ptr;
	ptr = &num;
	scanf ("%d", &num);
	printf ("%d", quadv(num));
	printf ("%d", quadr(ptr));
	printf ("%d", quadr(&num));
	system ("pause");
	return 0;
}

