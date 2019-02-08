#include <stdio.h>
#include <stdlib.h>

/* 2. Deseja-se publicar o número de acertos de cada aluno em uma prova em forma de
testes. A prova consta de 30 questões, cada uma com cinco alternativas identificadas por
A, B, C, D e E. Para isso são dados:
o cartão gabarito;
o número de alunos da turma;
o cartão de respostas para cada aluno, contendo o seu número e suas respostas. */

int main(int argc, char *argv[]) {
	char gabarito[5], n, respostas[5];
	int numalu, contace = 0, i, a;
	for (n = 0; n < 5; n++){
		printf ("Informe a resposta da %d pergunta, em letra maiúscula:\n", n + 1);
		fflush (stdin);
		scanf ("%c", &gabarito[n]);
	}
	printf ("Insira o número de alunos da turma:\n");
	scanf ("%d", &numalu);
	for (i = 0; i < numalu; i++){
		printf ("Cartão resposta do %d aluno\n", i + 1);
		for (a = 0; a < 5; a++){
			printf ("Informa a resposta da %d pergunta, em letra maiúscula:\n", a + 1);
			fflush (stdin);
			scanf ("%c", &respostas[a]);
			if (respostas[a] == gabarito[a]){
				contace = contace + 1;
			}
		}
		printf ("Total de acertos do aluno %d = %d", i + 1, contace);
		contace = 0;
	}
	return 0;
}
