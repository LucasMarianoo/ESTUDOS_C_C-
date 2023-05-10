#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um
automóvel que faz 12 Km por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto
(TEMPO) e a velocidade média (VELOCIDADE) durante a viagem. Desta forma, será possível obter a
distância percorrida com a fórmula DISTANCIA = TEMPO * VELOCIDADE. Possuindo o valor da
distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula
LITROS_USADOS = DISTANCIA / 12. Ao final, o programa deve apresentar os valores da velocidade
média (VELOCIDADE), tempo gasto na viagem (TEMPO), a distancia percorrida (DISTANCIA) e a
quantidade de litros (LITROS_USADOS) utilizada na viagem. */


int main () {

    setlocale(LC_ALL, "Portuguese");

    // variáveis
    int tempo, vel_media;
    float dist, litros_usados, km_litro;

    // leitura de dados
    printf("Digite o tempo gasto na viagem: ");
    scanf("%d", &tempo);

    printf("Digite a velocidade média em Km: ");
    scanf("%d", &vel_media);

    printf("Quantos Km seu automóvel faz com 1L? ");
    scanf("%f", &km_litro);

    
    // processamento
    dist = tempo * vel_media;
    litros_usados = dist / km_litro;

    // saída
    printf("Tempo de viagem: %d\n", tempo);
    printf("Velocidade média: %d \n", vel_media);
    printf("Distância percorrida: %fkm\n", dist);
    printf("A quantidade de combustível gasto foi %.1fL", litros_usados);

    
    return 0;
}