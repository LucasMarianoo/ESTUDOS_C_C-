#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define pi 3.14159265358979323846 

 /* Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula:
Volume = pi * Raio² * Altura */

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    // variáveis
    float vol, alt, raio;

    // entrada de dados
    printf("Digite o valor da altura em cm: ");
    scanf("%f", &alt);

    printf("Digite o valor do raio da circunferência em cm: ");
    scanf("%f", &raio);

    // formula para cálculo de volume
    vol = pi * pow(raio, 2) * alt;
    
    // resultado
    printf("O volume da lata é de %.2fcm³", vol);

return 0;
}