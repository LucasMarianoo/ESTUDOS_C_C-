#include <stdio.h>  
#include <stdlib.h>
#include <time.h>


/*
4.  Faça um programa que solicite ao usuário que adivinhe um número. 
	O programa deve gerar um número aleatório entre 1 e 100 e repetir a solicitação até que o usuário acerte o número.
*/

int main() {

    system("cls");
    srand(time(NULL));

    int r = rand();
    int random = r % 100;
    int user_number = 0;

    // printf("%d \n", random); // verifica o número aleatório para teste

    do {
        printf("Tente adivinhar o número: \n");
        scanf("%d", &user_number);
    }
    while (user_number != random);

    printf("Você acertou! \n");
    system("pause");

    return 0;
}