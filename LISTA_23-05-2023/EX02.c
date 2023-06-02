#include <stdio.h>
#include <stdlib.h>

/* 
3. Um posto está vendendo combustíveis com a seguinte tabela de descontos: 
Álcool      Até 25 litros, desconto de 2% por litro
            Acima de 25 litros, desconto de 4% por litro
Gasolina    Até 25 litros, desconto de 3% por litro
            Acima de 25 litros, desconto de 5% por litro 
*/

int main() { 


    int opcao;
    float litros, desconto, total;
    float preco = 5;
 
    while (opcao != 1 && opcao != 2) { // loop caso o usuário não digite uma opção válida

        system("cls");
        printf("\nTABELA DE DESCONTO \n\n");
        printf("=================================================================\n");
        printf("=   ÁLCOOL      Até 25 litros, desconto de 2%% por litro         =\n");
        printf("=               Acima de 25 litros, desconto de 4%% por litro    =\n");
        printf("=                                                               =\n");
        printf("=   GASOLINA    Até 25 litros, desconto de 3%% por litro         =\n");
        printf("=               Acima de 25 litros, desconto de 5%% por litro    =\n");
        printf("=================================================================\n\n");
    
        printf("Digite: \n1 - Álcool\n2 - Gasolina\n");
        scanf("%d", &opcao);
        

    }
    
    switch (opcao)
    {
    case 1: 

        printf("Você selecionou: ÁLCOOL\n");
        printf("Quantos litros deseja abastecer?\n");
        scanf("%f", &litros);
        
        if (litros <= 25) {

            total = litros * preco;
            desconto = total * 0.02;

            printf("O valor de %.1fL é R$%.2f\n", litros, total);
            printf("Você recebeu um desconto de R$%.2f\n", desconto);
            printf("O valor total é de %.2f\n", total-desconto);
        }
        else {

            total = litros * preco;
            desconto = total * 0.04;

            printf("O valor de %.1fL é R$%.2f\n", litros, total);
            printf("Você recebeu um desconto de R$%.2f\n", desconto);
            printf("O valor total é de %.2f\n", total-desconto);
        }

        break;        

    case 2:
        
        printf("Você selecionou: GASOLINA\n");
        printf("Quantos litros deseja abastecer?\n");
        scanf("%f", &litros);

        if (litros <= 25) {

            total = litros * preco;
            desconto = total * 0.03;

            printf("O valor de %.1fL é de R$%.2f\n", litros, total);
            printf("Você recebeu um desconto de R$%.2f\n", desconto);
            printf("O valor total é de %.2f\n", total-desconto);
        }
        else {

            total = litros * preco;
            desconto = total * 0.05;

            printf("O valor de %.1fL é R$%.2f\n", litros, total);
            printf("Você recebeu um desconto de R$%.2f\n", desconto);
            printf("O valor total é de %.2f\n", total-desconto);

        }
        break;

    default:
        break;
    }
 

    return 0;
}