#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // variáveis
    float fahrenheit, celsius;

    // entrada de dados
    printf("Digite a temperatura Fahrenheit para converter: ");
    scanf("%f", &fahrenheit);

    // conversão
    celsius = (fahrenheit-32)*5/9;

    printf("A temperatura convertida é: %f", celsius);
    

    return 0;
}