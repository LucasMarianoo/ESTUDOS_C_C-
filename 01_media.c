#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// cálculo de média de duas notas

int main () 
{
    
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, media;

    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;

    printf("A m�dia final �: %.2f ", media);


    return 0;
}