#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que solicite dois números inteiros do usuário e mostre
um menu com as opções de operações aritméticas a serem feitas com estes
dois valores:
- produto
- soma
- diferença
- divisão
- saída
Os cálculos devem ser feitos dentro de quatro diferentes funções e os
resultados devem ser impressos no programa principal. Use o comando switch
no programa principal. As funções devem ser escritas abaixo do programa
principal. Após mostrar o resultado, o menu deverá reaparecer de forma que o
usuário possa escolher outra opção de operação. O encerramento do programa
se dará quando o usuário escolher a opção de saída. */

int somar (int, int);
int subtrair (int, int);
int multiplicar (int, int);
float dividir (float, float);


int main(int argc, char *argv[]) {
	int saida = 0, soma, produto, diferenca, divisao, op, k, n;
	
	while (saida == 0){
		printf ("\nInsira a opção desejada:\n");
		printf ("Soma (1)\nDiferença (2)\nProduto (3)\nDivisão (4)\nSair (5)\n");
		scanf ("%d", &op);
		switch (op){
			case 1:
			printf ("Insira os números:\n");
			scanf ("%d\n%d", &k, &n);
			soma = somar (k, n);
			printf ("Soma = %d", soma);
			break;
			case 2:
			printf ("Insira os números:\n");
			scanf ("%d\n%d", &k, &n);
			diferenca = subtrair (k, n);
			printf ("Diferença = %d", diferenca);
			break;
			case 3:
			printf ("Insira os números:\n");
			scanf ("%d\n%d", &k, &n);
			produto = multiplicar (k, n);
			printf ("Produto = %d", produto);
			break;
			case 4:
			printf ("Insira os números:\n");
			scanf ("%d\n%d", &k, &n);
			divisao = dividir (k, n);
			printf ("Divisão = %f", divisao);
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

