#include <stdio.h>
#include <stdlib.h>

/*
9.  Faça um programa que solicite ao usuário que digite números e calcule a média dos números digitados. 
	O programa deve continuar solicitando números até que o usuário digite 0.
*/

int main() {

    system("cls");
    int num; 
    float soma, contador = 0;

    do {
        printf("Digite um número: \n");
        scanf("%d", &num);
        if (num != 0) {
            soma += num;
            contador++;
        }
    } while (num != 0); 

    printf("A média dos números digitados é %.2f", soma / contador);


    return 0;
}
