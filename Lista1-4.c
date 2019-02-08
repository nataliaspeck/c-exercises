#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dados o n�mero n de alunos de uma turma de Introdu��o a Ci�ncia da Computa��o
e suas notas da primeira prova, determinar a maior e a menor nota obtidas por essa
turma (Nota m�xima = 100 e nota m�nima = 0) */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int x, nota, cont, maior, menor;
	printf ("Insira o n�mero de alunos:\n");
	scanf ("%d", &x);
	if (x<=0){
		printf ("ERRO!Insira o n�mero de alunos:\n");
		scanf ("%d", &x);
	}
	maior = 0;
	menor = 100;
	printf ("\n");
	for (cont = 0; cont < x; cont++){
		printf ("Insira uma nota:\n");
		scanf ("%d", &nota);
		if (nota < menor){
			menor = nota;
		}
		if (nota > maior){
			maior = nota;
		}
	}
	printf ("Maior nota: %d e menor nota: %d", maior, menor);
	system ("pause");
	return 0;
}

