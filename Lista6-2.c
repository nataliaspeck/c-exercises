#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Seja a seguinte struct que é utilizada para descrever os produtos que
estão no estoque de uma loja :
struct Produto {
char nome[30]; /* Nome do produto */
// int codigo; /* Codigo do produto */
// double preco; /* Preco do produto */
// };
// a) Escreva uma instrução que declare uma matriz de Produto com 10 itens
// de produtos;
// b) Atribua os valores "Pe de Moleque", 13205 e R$0,20 aos membros da
// posição 0 e os valores "Cocada Baiana", 15202 e R$0,50 aos membros da
// posição 1 da matriz anterior;
/* c) Faça as mudanças que forem necessárias para usar um ponteiro para
Produto ao invés de uma matriz de Produtos. Faça a alocação de memória
de forma que se possa armazenar 10 produtos na área de memória
apontada por este ponteiro e refaça as atribuições da letra b;
d) Escreva as instruções para imprimir os campos que foram atribuídos na
letra c. */

int main(int argc, char *argv[]) {
	system ("color 0a");
	//setlocale(LC_ALL, "Portuguese");
	struct Produto{
	char nome[30]; /* Nome do produto */
	int codigo; /* Codigo do produto */
	double preco; /* Preco do produto */
	};
	struct Produto *produtos;
	produtos = (struct Produto *)malloc(10 * sizeof(struct Produto));
	strcpy(produtos[0].nome, "Pé de Moleque");
	produtos[0].codigo = 13205;
	produtos[0].preco = 0.20;
	strcpy(produtos[1].nome, "Cocada Baiana");
	produtos[1].codigo = 15202;
	produtos[1].preco = 0.50;
	printf ("%s", produtos[0].nome);
	printf ("%d", produtos[0].codigo);
	printf ("%f", produtos[0].preco);
	printf ("%s", produtos[1].nome);
	printf ("%d", produtos[1].codigo);
	printf ("%f", produtos[1].preco);
	system ("pause");
	return 0;
}

