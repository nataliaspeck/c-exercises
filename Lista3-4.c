#include <stdio.h>
#include <stdlib.h>

/* Ler base e altura de um ret�ngulo, calcular a �rea utilizando fun��o. */

int main(int argc, char *argv[]) {
	int base, alt, area;
	int arearet (int b, int h){
		return b * h;
	}
	printf ("Insira a base e a altura, respectivamente:\n");
	scanf ("%d\n%d", &base, &alt);
	area = arearet (base, alt);
	printf ("�rea = %d", area);
	return 0;
}
