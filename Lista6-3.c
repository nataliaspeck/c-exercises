#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Criar uma estrutura com 3 tipos diferentes, implementar as seguintes
situa��es:
Entrada de dados:
a) Atribui��o de valores;
b) Leitura de valores;
c) Atrav�s de uma fun��o.
Sa�da de Dados:
a) Impress�o no programa principal;
b) Atrav�s de uma fun��o.
4. Para a estrutura anterior, utilizar um vetor de estrutura.
5. Ainda para a estrutura anterior, utilizar aloca��o din�mica. */
struct Produto{
	char nome[30]; /* Nome do produto */
	int codigo; /* Codigo do produto */
	float preco; /* Preco do produto */
};
void  ler(struct Produto *prods);
void imprimir(struct Produto *prds);
int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	struct Produto *produtos;
	int q, i = 0;
	printf ("Quantos produtos? ");
	scanf ("%d", &q);
	produtos = (struct Produto *)malloc(q * sizeof(struct Produto));
	produtos++;
	for (i = 0; i < q; i++){
		ler(produtos);
		imprimir(produtos);
	}
	system ("pause");
	return 0;
}

void ler(struct Produto *prods){
	fflush(stdin);
	gets(prods->nome);
	fflush(stdin);
	scanf ("%d", &prods->codigo); // lembrar do & pois prods � um ponteiro por�m prods->codigo � um inteiro
	scanf ("%f", &prods->preco);
}

void imprimir(struct Produto *prds){
	printf("%s", prds->nome);
	printf ("%d\n", prds->codigo); // (*prds).codigo
	printf ("%f\n", prds->preco);
}

