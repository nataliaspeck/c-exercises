#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Seja a seguinte struct que � utilizada para descrever os produtos que
est�o no estoque de uma loja :
struct Produto {
char nome[30]; /* Nome do produto */
// int codigo; /* Codigo do produto */
// double preco; /* Preco do produto */
// };
// a) Escreva uma instru��o que declare uma matriz de Produto com 10 itens
// de produtos;
// b) Atribua os valores "Pe de Moleque", 13205 e R$0,20 aos membros da
// posi��o 0 e os valores "Cocada Baiana", 15202 e R$0,50 aos membros da
// posi��o 1 da matriz anterior;
/* c) Fa�a as mudan�as que forem necess�rias para usar um ponteiro para
Produto ao inv�s de uma matriz de Produtos. Fa�a a aloca��o de mem�ria
de forma que se possa armazenar 10 produtos na �rea de mem�ria
apontada por este ponteiro e refa�a as atribui��es da letra b;
d) Escreva as instru��es para imprimir os campos que foram atribu�dos na
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
	strcpy(produtos[0].nome, "P� de Moleque");
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

