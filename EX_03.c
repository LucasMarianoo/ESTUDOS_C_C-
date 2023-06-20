#include <stdlib.h>
#include <stdio.h>

/*
3.  Faça um programa que solicite ao usuário que digite um número. 
    O programa deve calcular e exibir a tabuada desse número de 1 a 10 utilizando a estrutura do-while.
*/

int main() {

    system("cls");

    int num;
    int i;

    printf("Digite um número para imprimir sua tabuada: \n");
    scanf("%d", &num); 

    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d \n", num, i, num * i);
    }

    return 0;
}