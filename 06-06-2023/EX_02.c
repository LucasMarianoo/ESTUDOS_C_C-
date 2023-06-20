#include <stdio.h>
#include <stdlib.h>

/*
2.  Faça um programa que solicite ao usuário que digite uma série de números positivos. 
	O programa deve calcular e exibir a soma dos números digitados. 
	A repetição deve ser encerrada quando o usuário digitar um número negativo.
*/

int main() {

    system("cls");

    int num; 
    int soma = 0;

    while (num > 0) {
        printf("Digite um número: \n");
        scanf("%d", &num);
        
        if (num > 0) {
            
            soma = num + soma;
        }    
    }

    printf("A soma dos números digitados é: %d", soma);
    
    return 0;
}
