#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa que solicite ao usu�rio que digite um n�mero e exiba os n�meros de 1 at� o n�mero digitado, 
pulando de 2 em 2. 
Utilize a estrutura do-while para realizar a repeti��o.      
*/

int main() {

system("cls");
setlocale(LC_ALL, "Portuguese");

int num = 1;
int user_num;

printf("Digite um número: \n");
scanf("%d", &user_num);

do {
    printf("%d \n", num);
    num = num + 2;
}
while (num <= user_num);

    return 0;
}