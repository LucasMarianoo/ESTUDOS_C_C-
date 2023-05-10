#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Efetuar o c�lculo da quantidade de litros de combust�vel gasta em uma viagem, utilizando um
autom�vel que faz 12 Km por litro. Para obter o c�lculo, o usu�rio deve fornecer o tempo gasto
(TEMPO) e a velocidade m�dia (VELOCIDADE) durante a viagem. Desta forma, ser� poss�vel obter a
dist�ncia percorrida com a f�rmula DISTANCIA = TEMPO * VELOCIDADE. Possuindo o valor da
dist�ncia, basta calcular a quantidade de litros de combust�vel utilizada na viagem com a f�rmula
LITROS_USADOS = DISTANCIA / 12. Ao final, o programa deve apresentar os valores da velocidade
m�dia (VELOCIDADE), tempo gasto na viagem (TEMPO), a distancia percorrida (DISTANCIA) e a
quantidade de litros (LITROS_USADOS) utilizada na viagem. */


int main () {

    setlocale(LC_ALL, "Portuguese");

    // vari�veis
    int tempo, vel_media;
    float dist, litros_usados, km_litro;

    // leitura de dados
    printf("Digite o tempo gasto na viagem: ");
    scanf("%d", &tempo);

    printf("Digite a velocidade m�dia em Km: ");
    scanf("%d", &vel_media);

    printf("Quantos Km seu autom�vel faz com 1L? ");
    scanf("%f", &km_litro);

    
    // processamento
    dist = tempo * vel_media;
    litros_usados = dist / km_litro;

    // sa�da
    printf("Tempo de viagem: %d\n", tempo);
    printf("Velocidade m�dia: %d \n", vel_media);
    printf("Dist�ncia percorrida: %fkm\n", dist);
    printf("A quantidade de combust�vel gasto foi %.1fL", litros_usados);

    
    return 0;
}