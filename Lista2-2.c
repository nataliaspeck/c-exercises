#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* comentário */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int a=1, b=2, c=3, n, cont=0;
	printf ("Insira um número:\n");
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
		printf ("É triangular\n");
	}else {
		printf ("Não é triangular\n");
	}
	system ("pause");
	return 0;
}

