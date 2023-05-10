#include <stdio.h>
#include <stdlib.h>

/*
Ler dois valores (inteiros, reais ou caracteres) para as variáveis A e B, e efetuar a troca dos valores de
forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da 
variável A. Apresentar os valores trocados.

*/

int main () {

    int varA, varB, aux;

    printf("Digite um valor para A: ");
    scanf("%d", &varA);

    printf("Digite um valor para B: ");
    scanf("%d", &varB);

    aux = varA;
    varA = varB;
    varB = aux;

    printf("Realizada a troca");
    printf("\nValor de A: %d", varA);
    printf("\nValor de B: %d", varB);

    return 0;
}