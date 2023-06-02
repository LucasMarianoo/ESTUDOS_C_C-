#include <stdio.h>

/* 
4. Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). 
Escreva um programa que leia as notas destes exames e imprima a classificação do aluno, sabendo que a média é 70.
Classificação:
A –passou em todos os exames;
B –passou em I, IIe IV, mas não em IIIou V;
C –passou em Ie II, IIIou IV, mas não em V.
Reprovado –outras situações. 
*/


int main(void) {

    int exame[4] = {};
    
    int i;

    for (i = 0; i <=4; i++ ) {

        printf("Digite as médias: \n");
        scanf("%d", &exame[i]);

    }

    if (exame[0] >= 70 && exame[1] >= 70 && exame[2] >= 70 && exame[3] >= 70 && exame[4] >= 70) {
        printf("A - Aprovado - Passou em todos os exames! \n");        
    }
    else if ((exame[0] >= 70 && exame[1] >= 70 && exame[3] >= 70) && (exame[2] >= 70 || exame[4] >= 70)) {
        printf("B - Aprovado \n");
    }
    else if ((exame[0] >= 70 && exame[1] >= 70 && exame[2] >= 70) || (exame[3] >= 70 && exame[4] < 70)) {
        printf("C - Aprovado! \n");
    }
    else {
        printf("Reprovado!");
    }

    
    return 0;
}