,#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um programa que:
a) declare duas vari�veis a e b do tipo float;
b) declare um ponteiro �p� para o tipo float;
c) Pe�a que o usu�rio digite um n�mero do tipo real, e o armazene em a;
d) Imprima o conte�do de a;
e) Imprima o endere�o de a;
f) Imprima o conte�do de p;
g) Imprima o endere�o de p;
h) Imprima o conte�do do endere�o apontado por p;
i) Imprima o conte�do de b;
j) Imprima o endere�o de b; */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	float a, b, *p;
	scanf ("%f", &a);
	p = &a;
	printf ("\n%f\n", a);
	printf ("%X\n", &a);
	printf ("%X\n", p);
	printf ("%X\n", &p);
	printf ("%f\n", *p);
	printf ("%f\n", b);
	printf ("%X\n", &b);
	system ("pause");
	return 0;
}

