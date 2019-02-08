#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Dados n números inteiros positivos, calcular a soma dos que são primos */

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int num, contp = 1, primo = 0, soma = 0, n; 
	printf ("Insira um número inteiro positivo n:\n");
	scanf ("%d", &n);
	if (n <= 0){
		printf ("Erro! Insira um número inteiro positivo n:\n");
		scanf ("%d", &n);
	}
	for (num = n; num > 0; num--){
		while (contp <= n){
			if (num % contp == 0){
				primo = primo + 1;
			}
			contp = contp + 1;
		}
		if (primo == 2){
			soma = soma + num;
		}
		primo = 0;
		contp = 1;
	}
	printf ("Soma de todos os primos: %d", soma);
	system ("pause");
	return 0;
}
