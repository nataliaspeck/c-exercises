#include <stdio.h>
#include <stdlib.h>

/* 2. Deseja-se publicar o n�mero de acertos de cada aluno em uma prova em forma de
testes. A prova consta de 30 quest�es, cada uma com cinco alternativas identificadas por
A, B, C, D e E. Para isso s�o dados:
o cart�o gabarito;
o n�mero de alunos da turma;
o cart�o de respostas para cada aluno, contendo o seu n�mero e suas respostas. */

int main(int argc, char *argv[]) {
	char gabarito[5], n, respostas[5];
	int numalu, contace = 0, i, a;
	for (n = 0; n < 5; n++){
		printf ("Informe a resposta da %d pergunta, em letra mai�scula:\n", n + 1);
		fflush (stdin);
		scanf ("%c", &gabarito[n]);
	}
	printf ("Insira o n�mero de alunos da turma:\n");
	scanf ("%d", &numalu);
	for (i = 0; i < numalu; i++){
		printf ("Cart�o resposta do %d aluno\n", i + 1);
		for (a = 0; a < 5; a++){
			printf ("Informa a resposta da %d pergunta, em letra mai�scula:\n", a + 1);
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
