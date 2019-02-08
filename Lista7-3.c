#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* comentário */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	FILE *arq;
	char string[100];
	arq = fopen("arq.txt", "a");
	printf ("Termina no Enter\n");
	while(1){
		fflush(stdin);
		gets(string);
		if (strcmp(string, "sair") == 0){
			break;
		}else{
			fputs(string, arq);
			fputs("\n", arq);
		}
	}
	while(1){
		fflush(stdin);
		gets(string);
		if (strcmp(string, "sair") == 0){
			break;
		}else{
			fprintf(arq, "%s", string);
			fprintf(arq, "\n");
		}
	}
	fclose(arq);
	system ("pause");
	return 0;
}

