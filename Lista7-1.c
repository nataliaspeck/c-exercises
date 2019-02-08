#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa para escrever caractere a caractere (putc) em um
arquivo texto (exemplo1.txt). */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	FILE *arq;
	char ch;
	arq = fopen("arq.txt", "w");
	printf ("Termina no Enter");
	while(1){
		fflush(stdin);
		scanf("%c", &ch);
		if (ch == '\n'){
			break;
		}else{
			putc(ch, arq);
		}
	}
	fclose(arq);
	system ("pause");
	return 0;
}

