#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
Efetuar o cálculo e a apresentação do valor de uma prestação em atraso, utilizando a fórmula:
PRESTACAO = VALOR + (VALOR * TAXA/100) * TEMPO).
*/

int main () {

    setlocale(LC_ALL, "Portuguese");

    // variáveis
    int tempo;
    float valor, taxa, prestacao;

    // leitura de dados
    printf("Digite o valor da parcela: ");
    scanf("%f", &valor);

    printf("Digite o valor da taxa: ");
    scanf("%f", &taxa);

    printf("Digite o tempo em atraso em dias: ");
    scanf("%d", &tempo);

    // processamento
    prestacao = valor + (valor*taxa/100)*tempo;

    // saída
    printf("O valor da prestação atualizado é: R$%.2f", prestacao);

    return 0;
}