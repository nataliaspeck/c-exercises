#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que recebe um inteiro positivo m e devolve 1 se m é primo, 0
em caso contrário.
(b) Escreva um programa que leia um inteiro não-negativo n e imprima a soma dos n primeiros
números primos.
2. (a) Escreva uma função que recebe um número inteiro n>0 e devolve o número de
dígitos de n e o primeiro dígitos de n.
(b) Escreva um programa que leia uma sequência de n inteiros positivos e imprime o
número de dígitos e o primeiro dígitos de cada um deles.
3. (a) Escreva uma função que recebe como parâmetro um inteiro positivo ano e
devolve 1 se ano for bissexto, 0 em caso contrário. (Um ano é bissexto se (ano % 4 ==
0 && (ano % 100 != 0 || ano % 400 == 0)).)
(b) Escreva uma função que tem como parâmetros de entrada e saída três números
inteiros, dia, mês e ano, representando uma data, e modifica esses inteiros de forma que
eles representem o dia seguinte.*/


int main(int argc, char *argv[]) {
	return 0;
}

int primo (int x, int cont, int i){
	cont = 0;
	for (i = 1; i <= x; i++){
		if (x % i == 0){
			cont++;
		}
	}
	if (cont == 2){
		printf ("1");
	}else{
		printf ("2");
	}
}
int bissexto (int ano){
	printf ("Insira o ano:\n");
	scanf ("%d", &ano);
	if ((ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))){
		printf ("1");
	}else{
		printf ("2");
	}
}
int data (int dia, int mes, int ano){
	printf ("Insira o dia, mês e ano:\n");
	scanf ("%d\n%d\n%d", &dia, &mes, &ano);
	if (mes == 2){
		if (dia <= 28){
			dia++;
		}else{
			dia = 1;
			mes++;
		}
	}
	if (mes == 1 || mes == 3|| mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
		if (dia <= 31){
			dia++;
		}else{
			dia = 1;
			mes++;
		}
	}
	if (mes == 4 || mes == 6|| mes == 9 || mes == 11){
		if (dia <= 30){
			dia++;
		}else{
			dia = 1;
			mes++;
		}
	}
}
