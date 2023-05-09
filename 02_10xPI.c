#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// multiplica pi por 10

int main ()
{
    float resultado, pi;

    pi = 3.14159;
    resultado = pi * 10;

    printf("Pi * 10: \n");
    printf("%f", resultado);

    
    return 0;
}