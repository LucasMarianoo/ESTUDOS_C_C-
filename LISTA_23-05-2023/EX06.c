#include <stdio.h> 
#include <stdlib.h>

/* 
6. A empresa Compre+ decidiu dar um aumento de salário aos seus colaboradores e necessita de um programa que calcule esses reajustes. 
Esse programa deve receber o salário de um colaborador e fazer o reajuste seguindo os seguintes critérios, baseado no salário atual informado:

a. salários até R$ 250,00: aumento de 20%
b. salários entre R$ 250,00 e R$ 900,00: aumento de 15%
c. salários entre R$ 900,00 e R$ 1500,00: aumento de 10%
d. salários de R$ 1500,00 em diante: aumento de 5%

Após o aumento ser realizado, informe na tela:

1. o salário antes do reajuste;
2. o percentual de aumento aplicado;
3. o valor do aumento;
4. o novo salário, após o aumento. 
*/

int main(void) {

    float salario, novo_salario;
    int opt = 1;

    while (opt == 1) {

        system("cls");
        
        printf("Digite o salário pava verificar o reajuste: \n");
        scanf("%f", &salario);

        if (salario <= 250) {

            novo_salario = salario * 1.2;

            printf("Seu salário era R$%.2f\n", salario);
            printf("Você recebeu um aumento de 20%%\n");
            printf("O valor do aumento é de R$%.2f\n", novo_salario-salario);
            printf("Seu novo salário é de: R$%.2f", novo_salario);

        }
        else if ((salario > 250) && (salario < 900)) {

            novo_salario = salario * 1.15;

            printf("Seu salário era R$%.2f\n", salario);
            printf("Você recebeu um aumento de 15%%\n");
            printf("O valor do aumento é de R$%.2f\n", novo_salario-salario);
            printf("Seu novo salário é de: R$%.2f", novo_salario);

        }
        else if ((salario >= 900) && (salario <= 1500)) {
            
            novo_salario = salario * 1.1;

            printf("Seu salário era R$%.2f\n", salario);
            printf("Você recebeu um aumento de 10%%\n");
            printf("O valor do aumento é de R$%.2f\n", novo_salario-salario);
            printf("Seu novo salário é de: R$%.2f", novo_salario);

        }
        else {

            novo_salario = salario * 1.05;

            printf("Seu salário era R$%.2f\n", salario);
            printf("Você recebeu um aumento de 5%%\n");
            printf("O valor do aumento é de R$%.2f\n", novo_salario-salario);
            printf("Seu novo salário é de: R$%.2f", novo_salario);
        }

        printf("Deseja verificar um novo salário? Digite:\n");
        printf("1 - SIM\n");
        printf("2 - NÃO\n");
        scanf("%d", &opt);

    }    

    return 0;    
}