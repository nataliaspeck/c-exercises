#include <stdio.h>
#include <stdlib.h>

void copia_char(char *destino, char *origem){
    int i;
    for(i=0; origem[i]!='\0'; i++)
        destino[i]=origem[i];
    destino[i]='\0';
}

int conta_char(char *s){
    int cont = 0;
    while(s[cont] != '\0')
        cont ++;
    return cont;
}

char *concatena(char *n1, char *n2){
    char *p = malloc(conta_char(n1)+conta_char(n2)+1);
    copia_char(p, n1);
    copia_char(p+conta_char(p), n2);
    return p;
}

int main(){

    char nome1[10], nome2[10];

    printf("Digite um nome: ");
    scanf("%s",nome1);

    printf("Digite outro nome: ");
    scanf("%s", nome2);

    char *concat = concatena(nome1, nome2);

    printf("%s + %s = %s\n", nome1, nome2, concat);

    free(concat);
}
