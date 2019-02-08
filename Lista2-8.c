#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 8. Escrever uma função TROCA (x, y, z, p) que troca entre si os conteúdos de:
– x e y, se p = 1
– y e z, se p = 2
– x e z, se p = 3 */

void TROCA (int *x, int *y, int *z, int *p){
	int temp;
	if ((*p) == 1){
		temp = *x;
		*x = *y;
		*y = temp;
	}
	if ((*p) == 2){
		temp = *y;
		*y = *z;
		*z = temp;
	}
	if ((*p) == 3){
		temp = *x;
		*x = *z;
		*z = temp;
	}
}

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int numx, numy, numz, nump;
	int *numxx = &numx, *numyy = &numy, *numzz = &numz, *numpp = &nump;
	scanf ("%d\n%d\n%d\n%d", &numx, &numy, &numz, &nump);
	TROCA(numxx, numyy, numzz, numpp);
	printf ("\n%d\n%d\n%d\n%d", numx, numy, numz, nump);
	system ("pause");
	return 0;
}

