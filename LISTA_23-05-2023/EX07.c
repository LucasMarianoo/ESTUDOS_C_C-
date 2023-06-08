#include <stdio.h>
#include <stdlib.h>

/* 
7. Faça um algoritmo investigador criminal. Ele deve fazer 5 perguntas para uma pessoa sobre um crime. 

As perguntas são:

e. "Telefonou para a vítima?"
f. "Esteve no local do crime?"
g. "Mora perto da vítima?"
h. "Devia para a vítima?"
i. "Já trabalhou com a vítima?"

O algoritmo deve emitir uma classificação sobre a participação da pessoa no crime. 
Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". 
Caso contrário, ele será classificado como "Inocente". 
*/

int main() {

    int resposta;
    int resultado = 0;

    int i;  

    char Array[6][30] = {
        "Telefonou para a vítima?", 
        "Esteve no local do crime?", 
        "Mora perto da vítima?",
        "Devia para a vítima?",
        "Já trabalhou com a vítima?",
        };  
     
    for(i = 0; i < 5; i++)  
    {  
        system("cls");

        printf("%s\n", Array[i]);

        printf("Digite: \n");
        printf("1 - SIM \n");
        printf("2 - NÃO \n");

        scanf("%d", &resposta);

        if (resposta == 1) {
            resultado += 1;
        }

    }  

    if (resultado == 2) {

        printf("Você é um suspeito!");

    }
    else if ((resultado == 3) || (resultado == 4)) {
        
        printf("Você foi cúmplice! Teje preso em nome da lei!");

    }
    else if (resultado == 5) {

        printf("Você é o assassino! Teje preso em nome da lei!");
    }
    else {
        
        printf("Você é inocente! Está liberado");
        
    }
    
    

    return 0;

}