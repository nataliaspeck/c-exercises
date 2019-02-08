# exercicios-c
Lista de exercícios em C (condicional, repetição, funções, vetores/matrizes, strings, structs, arquivos)

LISTA 1

1. Dado um número inteiro positivo n, calcular a soma dos n primeiros números
inteiros positivos.

2. Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

3. Dados um inteiro x e um inteiro não-negativo n, calcular x^n

4. Dados o número n de alunos de uma turma de Introdução a Ciência da Computação
e suas notas da primeira prova, determinar a maior e a menor nota obtidas por essa
turma (Nota máxima = 100 e nota mínima = 0).

5. Dado um natural n, determine o número harmônico Hn

6. Os pontos (x,y) que pertencem à figura H (abaixo) são tais que x > 0, x > 0 e x^2 + y^2 < 1.
Dados n pontos reais (x,y), verifique se cada ponto pertence ou não a H.

7. Para n alunos de uma determinada classe são dadas as 3 notas das provas. Calcular
a média aritmética das provas de cada aluno, a média da classe, o número de
aprovados e o número de reprovados (critério de aprovação: média maior ou igual a
cinco).

8. Dado um inteiro positivo n, calcular e imprimir o valor da seguinte soma:
1/n + 2/n-1 + 3/n-2 + ... + n/1

9. Dado um número inteiro positivo n, determinar todos os inteiros entre 1 e n que
são comprimento da hipotenusa de um triângulo retângulo com catetos inteiros.

10. Dados n números inteiros positivos, calcular a soma dos que são primos.

11. Sabe-se que um número da forma n^3 é igual a soma de n ímpares consecutivos.
Dado m, determine os ímpares consecutivos cuja soma é igual a n^3 para n assumindo valores de 1 a m.


LISTA 2

1. Dados n e dois números inteiros positivos i e j diferentes de 0, imprimir em ordem
crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.

2. Dizemos que um número natural é triangular se ele é produto de três números
naturais consecutivos. Dado um inteiro não-negativo n, verificar se n é triangular.

3. Dado um inteiro positivo n, verificar se n é primo.

4. Dados dois números inteiros positivos, determinar o máximo divisor comum entre
eles usando o algoritmo de Euclides.

5. Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento
da população de coelhos através de uma sequência de números naturais que
passou a ser conhecida como sequência de Fibonacci. Faça um programa que, dado n, calcula Fn.

6. Dizemos que um número i é congruente módulo m a j se i % m = j % m.
Dados inteiros positivos n, j e m, imprimir os n primeiros naturais congruentes a j módulo m.

7. Dados três números naturais, verificar se eles formam os lados de um triângulo
retângulo.

8. Faça um programa que calcula a soma:
1 - 1/2 + 1/3 - 1/4 + ... + 1/9999 - 1/10000


LISTA 3.1

1. Faça um programa em C com uma função para calcular o quadrado de um
número e outra para calcular o cubo de um número. O número deve ser
passado com parâmetro e o resultado retornado ao programa principal.

2. Faça um programa em C com uma função para calcular a média de 4
valores (parâmetros) e retorne o resultado ao programa principal.

3. Leia 3 números, crie uma função para calcular e retornar a soma dos
números e outra função para encontrar e imprimir o maior número.

4. Ler base e altura de um retângulo, calcular a média utilizando função.

5. Faça um programa em C que solicite um número do usuário e imprima: o
quadrado deste número, seu fatorial e o somatório de 1 até este número. Os
três diferentes cálculos devem ser feitos dentro de funções e a impressão do
resultado deve ser feita no programa principal.

6. Escreva um programa que solicite dois números inteiros do usuário e mostre
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
se dará quando o usuário escolher a opção de saída.

7. Faça um programa que solicite do usuário três valores: dia, mês e ano. Crie
uma função que indica se os valores digitados correspondem a uma data
válida. O programa principal deve emitir uma mensagem indicando se é válida
ou não. Escreva a função acima do programa principal.

Recursividade
1. Elabore um programa recursivo em C que calcule o n-ésimo termo da
seqüência de Fibonacci. O termo deverá ser impresso na função main().

2. Elabore um programa recursivo em C que calcule o n-ésimo termo da
seqüência: 1, 2, 4, 8, 16, 32... . O termo deverá ser impresso na função
main().

3. Elabore um programa recursivo em C que calcule o n-ésimo termo da
seqüência: 3, 5, 7, 9, 11, .. . O termo deverá ser impresso na função main().

4. Elabore um programa recursivo em C que calcule o n-ésimo termo da
seqüência: 1, 3, 9, 27, .. . O termo deverá ser impresso na função main().

5. Elabore um programa recursivo em C que calcule a soma de 1 até n.


LISTA 3.2

1. (a) Escreva uma função que recebe um inteiro positivo m e devolve 1 se m é primo, 0
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
eles representem o dia seguinte.


LISTA 4

1. Dada uma sequência de n números, imprimi-la na ordem inversa à da leitura.

2. Deseja-se publicar o número de acertos de cada aluno em uma prova em forma de
testes. A prova consta de 30 questões, cada uma com cinco alternativas identificadas por
A, B, C, D e E. Para isso são dados:
o cartão gabarito;
o número de alunos da turma;
o cartão de respostas para cada aluno, contendo o seu número e suas respostas.

3. Faça um algoritmo que leia uma string e conte a quantidade de vogais.

4. Faça um algoritmo que leia uma string e determine se ela é palíndrome (igual se lida
de trás pra frente).

5. Leia uma string FONTE e uma segunda string ALVO. Faça um algoritmo que conte
quantas vezes ALVO aparece em FONTE. Exemplo:
FONTE =\o rato roeu a roupa do rei de roma"& ALVO = “ro” -> “ro” aparece 3 vezes
na frase.

6. Faça um algoritmo que leia uma string e remova as vogais e os espaços em branco.
Exemplo: “universidade do estado de santa catarina!” -> “nvrsdddstddsntctrn”

7. Dados dois strings (um contendo uma frase e outro contendo uma palavra),
determine o número de vezes que a palavra ocorre na frase.
Exemplo:
Para a palavra ANA e a frase :
ANA E MARIANA GOSTAM DE BANANA
Temos que a palavra ocorre 4 vezes na frase.

8. Dada uma sequência de n números reais, determinar os números que compõem a
sequência e o número de vezes que cada um deles ocorre na mesma.
Exemplo: n = 8
Sequência: -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1,7

9. (QUIM 84) Dada uma sequência x1, x2, ..., xk de números inteiros, verifique se
existem dois segmentos consecutivos iguais nesta sequência, isto é, se existem i e m tais
que:

xi, xi+1,..., xi+m-1 = xi+m, xi+m+1,..., xi+2m-1

Imprima, caso existam, os valores de i e m.
Exemplo: Na sequência 7, 9, 5, 4, 5, 4, 8, 6 existem i=3 e m=2.


10. Dadas duas matrizes reais Amxn e Bnxp, calcular o produto de A por B.

11. Dada uma matriz real Amxn, verificar se existem elementos repetidos em A.

12. Dizemos que uma matriz inteira Anxn é uma matriz de permutação se em cada linha
e em cada coluna houver n-1 elementos nulos e um único elemento igual a 1.
Dada uma matriz inteira Anxn, verificar se A é de permutação.

13. Dada uma matriz Amxn, imprimir o número de linhas e o número de colunas nulas
da matriz.


LISTA 6

1. Escreva um programa fazendo o uso de struct's. Você deverá criar uma
struct chamada Ponto, contendo apenas a posição x e y (inteiros) do ponto.
Declare 2 pontos, leia a posição (coordenadas x e y) de cada um e calcule a
distância entre eles. Apresente no final a distância entre os dois pontos.

2. Seja a seguinte struct que é utilizada para descrever os produtos que
estão no estoque de uma loja :
struct Produto {
char nome[30]; /* Nome do produto */
int codigo; /* Codigo do produto */
double preco; /* Preco do produto */
};
a) Escreva uma instrução que declare uma matriz de Produto com 10 itens
de produtos;
b) Atribua os valores "Pe de Moleque", 13205 e R$0,20 aos membros da
posição 0 e os valores "Cocada Baiana", 15202 e R$0,50 aos membros da
posição 1 da matriz anterior;
c) Faça as mudanças que forem necessárias para usar um ponteiro para
Produto ao invés de uma matriz de Produtos. Faça a alocação de memória
de forma que se possa armazenar 10 produtos na área de memória
apontada por este ponteiro e refaça as atribuições da letra b;
d) Escreva as instruções para imprimir os campos que foram atribuídos na
letra c.

3. Criar uma estrutura com 3 tipos diferentes, implementar as seguintes
situações:
Entrada de dados:
a) Atribuição de valores;
b) Leitura de valores;
c) Através de uma função.
Saída de Dados:
a) Impressão no programa principal;
b) Através de uma função.


LISTA 7

1. Faça um programa para escrever caractere a caractere (putc) em um
arquivo texto (exemplo1.txt).

2. Faça um programa para ler caractere a caractere (getc) do arquivo
exemplo1.txt e escrever na tela.

3. Escreva um programa que abra um arquivo texto e conte o número de
caracteres presentes nele. Imprima o número de caracteres na tela.

4. Repita os exercícios anteriores (leitura e escrita) para strings (fputs, fgets)

5. Crie uma estrutura, grave os dados em arquivo binário, leia os dados do
arquivo e mostre. (fwrite, fread)

6. Refaça o exercício anterior com as funções fprintf e fscanf.

7. Escreva um programa que leia uma lista de nomes e idades de um arquivo
texto. Prepare um arquivo para ser lido com nomes e idades. Apresente os
dados lidos em forma de tabela na tela. Use as funções de sua preferência,
mas faça pelo menos duas versões do programa usando funções de leitura
diferentes.
