#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Fa�a um programa que solicite ao usu�rio que digite um n�mero e calcule a soma de todos os n�meros pares de 1 at� o n�mero digitado. 
	Utilize a estrutura do-while para realizar a repeti��o.     
*/

int main() {

system("cls");
setlocale(LC_ALL, "Portuguese");

int num = 0;
int user_num;
int soma = 0;

printf("Digite um número: \n");
scanf("%d", &user_num);

do {
    soma = soma + num;
    num = num + 2;
}
while (num <= user_num);

printf("%d \n", soma);

    return 0;
}
