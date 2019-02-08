#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* comentário */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	FILE *arq;
	char string[100];
	arq = fopen("arq.txt", "r");
	while (fgets(string, 100, arq) != NULL){
		printf("%s", string);
	}
	while (fscanf(arq, "%s", string) != EOF){
		printf("%s\n", string);
	}
	fclose(arq);
	system ("pause");
	return 0;
}

