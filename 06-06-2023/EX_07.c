#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que solicite ao usuário que digite um número e exiba o fatorial desse número. 
	Utilize a estrutura do-while para realizar a repetição.
*/

int main() {

system("cls");

int copy_num;
int user_num = 1;

printf("Digite um número: ");
scanf("%d", &user_num);

copy_num = user_num;

do {
    user_num = user_num * (copy_num - 1);
    --copy_num;        

}
while (copy_num > 1);

printf("%d", user_num);

    return 0;
}
