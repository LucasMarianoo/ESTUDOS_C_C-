#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // converter temperatura Celsius para Fahrenheit
    int celsius;
    float fahrenheit;

    printf("Digite a temperatura em Celsius que deseja converter: ");
    scanf("%d", &celsius);

    // fórmula para conversão
    fahrenheit = (celsius*1.8)+32; 

    printf("A temperatura em Fahrenheit é: %.1f", fahrenheit);



    return 0;
}