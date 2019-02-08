#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que solicite dois n�meros inteiros do usu�rio e mostre
um menu com as op��es de opera��es aritm�ticas a serem feitas com estes
dois valores:
- produto
- soma
- diferen�a
- divis�o
- sa�da
Os c�lculos devem ser feitos dentro de quatro diferentes fun��es e os
resultados devem ser impressos no programa principal. Use o comando switch
no programa principal. As fun��es devem ser escritas abaixo do programa
principal. Ap�s mostrar o resultado, o menu dever� reaparecer de forma que o
usu�rio possa escolher outra op��o de opera��o. O encerramento do programa
se dar� quando o usu�rio escolher a op��o de sa�da. */

int somar (int, int);
int subtrair (int, int);
int multiplicar (int, int);
float dividir (float, float);


int main(int argc, char *argv[]) {
	int saida = 0, soma, produto, diferenca, divisao, op, k, n;
	
	while (saida == 0){
		printf ("\nInsira a op��o desejada:\n");
		printf ("Soma (1)\nDiferen�a (2)\nProduto (3)\nDivis�o (4)\nSair (5)\n");
		scanf ("%d", &op);
		switch (op){
			case 1:
			printf ("Insira os n�meros:\n");
			scanf ("%d\n%d", &k, &n);
			soma = somar (k, n);
			printf ("Soma = %d", soma);
			break;
			case 2:
			printf ("Insira os n�meros:\n");
			scanf ("%d\n%d", &k, &n);
			diferenca = subtrair (k, n);
			printf ("Diferen�a = %d", diferenca);
			break;
			case 3:
			printf ("Insira os n�meros:\n");
			scanf ("%d\n%d", &k, &n);
			produto = multiplicar (k, n);
			printf ("Produto = %d", produto);
			break;
			case 4:
			printf ("Insira os n�meros:\n");
			scanf ("%d\n%d", &k, &n);
			divisao = dividir (k, n);
			printf ("Divis�o = %f", divisao);
			break;
			case 5:
			saida = 1;
			break;		
		}
		k = 0;
		n = 0;
	}
	return 0;
}


int somar (int a, int b){
	return a + b;
}
int subtrair (int y, int z){
	if (y > z){
		return y - z;
	} else {
		return z - y;
	}
}
int multiplicar (int w, int x){
	return w * x;
}
float dividir (float c, float d){
	if (c ==0 || d == 0){
		return 0;
	}
	return c / d;
}

