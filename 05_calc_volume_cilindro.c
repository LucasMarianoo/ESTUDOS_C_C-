#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define pi 3.14159265358979323846 

 /* Calcular e apresentar o valor do volume de uma lata de �leo, utilizando a f�rmula:
Volume = pi * Raio� * Altura */

int main () {
    
    setlocale(LC_ALL, "Portuguese");
    
    // vari�veis
    float vol, alt, raio;

    // entrada de dados
    printf("Digite o valor da altura em cm: ");
    scanf("%f", &alt);

    printf("Digite o valor do raio da circunfer�ncia em cm: ");
    scanf("%f", &raio);

    // formula para c�lculo de volume
    vol = pi * pow(raio, 2) * alt;
    
    // resultado
    printf("O volume da lata � de %.2fcm�", vol);

return 0;
}