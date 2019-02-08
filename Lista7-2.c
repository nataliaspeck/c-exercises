#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* comentário */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	FILE *arq;
	char ch;
	arq = fopen("arq.txt", "r");
	while(ch != EOF){
		ch = getc(arq);
		printf ("%c", ch);
	}
	fclose(arq);
	system ("pause");
	return 0;
}

