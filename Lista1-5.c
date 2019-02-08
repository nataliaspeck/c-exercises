#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Crie um programa que:
a) declare e inicialize um vetor do tipo int;
b) declare e inicialize um vetor do tipo float;
c) declare um ponteiro para o vetor int e uma variável inteira;
d) declare um ponteiro para o vetor do tipo float;
e) Imprima os elementos do vetor;
f) Imprima o endereço de cada um dos elementos listados. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int vi[10], *pi, *pindice, i;
	float vf[10], *pf;
	pi = vi;
	pf = vf;
	pindice = &i;
	printf ("v1\n");
	for (*pindice = 0; *pindice < 10; (*pindice)++){
		scanf("\n%d", &(pi[*pindice]));
	}
	for (*pindice = 0; *pindice < 10; (*pindice)++){
		printf("\n%d", *(pi + *pindice));
	}
	printf ("\nv2\n");
	for (*pindice = 0; *pindice < 10; (*pindice)++){
		scanf("\n%f", pf + *pindice); // igual a scanf("\n%d", &(pf[*pindice]));
	}
	for (*pindice = 0; *pindice < 10; (*pindice)++){
		printf("\n%f", *(pf + *pindice));
	}
	printf ("\n\n");
	for (*pindice = 0; *pindice < 10; (*pindice)++){
		printf("\n%X", pi + *pindice);
		printf("\n%X", &(pi[*pindice]));
	}
	for (*pindice = 0; *pindice < 10; (*pindice)++){
		printf("\n%X", pf + *pindice);
	}
	system ("pause");
	return 0;
}

