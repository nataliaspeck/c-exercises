#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça uma função para ordenar um vetor, deve ser passado por parâmetro o
vetor e o seu tamanho, imprimir no programa principal.
a) ordenação(vetor, tamanho)
b) crie uma outra função para fazer a troca dos elementos do vetor por
referência. */

void lerVetor(int *v, int tamanho);
void escreveVetor(int *vt, int tm);
void ordenacao(int *vtr, int ta);

int main(int argc, char *argv[]) {
	system ("color 0a");
	setlocale(LC_ALL, "Portuguese");
	int t, *vet;
	printf ("Tamanho do vetor? ");
	scanf ("%d", &t);
	vet = (int *)malloc(t * sizeof(int));
	lerVetor(vet, t);
	ordenacao(vet, t);
	escreveVetor(vet, t);
	system ("pause");
	return 0;
}

void escreveVetor(int *v, int tamanho){
	int i;
	for (i = 0; i < tamanho; i++){
		printf ("Vetor[%d] = %d\n", i, *(v + i));
	}
}

void lerVetor(int *vt, int tm){
	int n;
	for (n = 0; n < tm; n++){
		scanf("%d", vt+n);
	}
}

void ordenacao(int *vtr, int ta){
	int menor, temp;
	int k, j;
	for (k = 0; k < ta - 1; k++){
		menor = k;
		for (j = k + 1; j < ta; j++){
			if (vtr[j] < vtr[menor]){
				menor = j;
			}
			temp = vtr[k];
			vtr[k] = vtr[menor];
			vtr[menor] = temp;
		}
	}
}
