#include <stdio.h>
#include <stdlib.h>

/* 
1. Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias. 
*/

int main() {

    int idade, anos, meses, dias;

    printf("Digite a idade em dias: ");
    scanf("%d", &idade);

    anos = idade / 365;
    meses = (idade % 365) / 30;
    dias = (idade % 365) % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mês(s)\n", meses);
    printf("%d dia(s)\n", dias);



    return 0;
}