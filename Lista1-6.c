#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	printf ("Insira a coordenada x e em seguida a coordenada y:\n");
	scanf ("%d\n%d", &x, &y);
	if ((x >= 0) && (y >= 0) && ((x*x)+(y*y) <= 1)){
		printf ("O ponto pertece � �rea H");
	} else {
		printf ("O ponto n�o pertence � �rea H");
	}
	return 0;
}
