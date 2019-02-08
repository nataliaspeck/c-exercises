,#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que:
a) declare duas variáveis a e b do tipo float;
b) declare um ponteiro “p” para o tipo float;
c) Peça que o usuário digite um número do tipo real, e o armazene em a;
d) Imprima o conteúdo de a;
e) Imprima o endereço de a;
f) Imprima o conteúdo de p;
g) Imprima o endereço de p;
h) Imprima o conteúdo do endereço apontado por p;
i) Imprima o conteúdo de b;
j) Imprima o endereço de b; */

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

