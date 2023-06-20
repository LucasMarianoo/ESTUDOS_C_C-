#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Fa�a um programa que solicite ao usu�rio que digite um n�mero e verifique se o n�mero � primo. 
	Utilize a estrutura do-while para realizar a repeti��o.
*/

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("cls");

    int user_num, primo = 0;
    int count = 1;

    printf("Digite um número: ");
    scanf("%d", &user_num);

    while (count <= user_num) {
        if (user_num % count == 0) {
            primo++;

        }
        count++;
    }

    if (primo == 2) {
        printf("Número primo");        
    }
    else {
        printf("Número não primo");
    }

    return 0;
}