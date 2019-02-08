#include <stdio.h>
#include <stdlib.h>

/* Ler base e altura de um retângulo, calcular a área utilizando função. */

int main(int argc, char *argv[]) {
	int base, alt, area;
	int arearet (int b, int h){
		return b * h;
	}
	printf ("Insira a base e a altura, respectivamente:\n");
	scanf ("%d\n%d", &base, &alt);
	area = arearet (base, alt);
	printf ("Área = %d", area);
	return 0;
}
