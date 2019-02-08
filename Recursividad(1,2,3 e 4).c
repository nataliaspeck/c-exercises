#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa recursivo em C que calcule o n-ésimo termo da
seqüência de Fibonacci. O termo deverá ser impresso na função main().
2. Elabore um programa recursivo em C que calcule o n-ésimo termo da
seqüência: 1, 2, 4, 8, 16, 32... . O termo deverá ser impresso na função
main().
3. Elabore um programa recursivo em C que calcule o n-ésimo termo da
seqüência: 3, 5, 7, 9, 11, .. . O termo deverá ser impresso na função main().
4. Elabore um programa recursivo em C que calcule o n-ésimo termo da
seqüência: 1, 3, 9, 27, .. . O termo deverá ser impresso na função main().
5. Elabore um programa recursivo em C que calcule a soma de 1 até n.*/
int fibonacci (int n){
	if (n==0){
		return 0;
	}
	if (n == 1 || n == 2){
		return 1;
	}
	if (n>1){
	return fibonacci (n-1) + fibonacci (n-2);
	}
}
int soma (int n){
	if (n = 1){
		return 1;
	}else {
		return n + soma (n-1);
	}
}
int sequencia (int n){
	if(n == 1)
		return 1;
	return 2 * sequencia (n - 1);
}
int sequencia (int n){
	if(n == 1)
		return 1;
	return 3 * sequencia (n - 1);
}
int sequencia (int n){
	if(n == 1)
		return 3;
	return sequencia (n - 1) + 2;
}
int main(int argc, char *argv[]) {
	return 0;
}

