#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* coment�rio */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int a=1, b=2, c=3, n, cont=0;
	printf ("Insira um n�mero:\n");
	scanf ("%d", &n);
	do{
		if (a*b*c == n || n == 0){
			cont++;
		} 
		a++;
		b++;
		c++;
	}while (a*b*c <= n);
	if (cont == 1){
		printf ("� triangular\n");
	}else {
		printf ("N�o � triangular\n");
	}
	system ("pause");
	return 0;
}

