#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, cont, nt1, nt2, nt3, soma = 0, media;
	printf ("Insira a quantidade de alunos:\n");
	scanf ("%d", &num);
	for (cont = 0; cont < num; cont++){
		printf ("Insira a 1ª, 2ª e 3ª nota do %d aluno, respectivamente:\n", cont + 1);
		scanf ("%d\n%d\n%d\n", &nt1, &nt2, &nt3);
		media = (nt1 + nt2 + nt3)/3;
		if (media >= 5){
			printf ("Aluno aprovado!");
		} else {
			printf ("Aluno reprovado!");
		}
		soma = soma + media;
	}
	printf ("A média da turma foi de: %d\n", soma/num);
	return 0;
}
