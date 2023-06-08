#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    char login[] = "Lucas";
    char senha[] = "253545";
    char user_login[100];
    char user_senha[100];
    char sair[1];
    
    printf("Digite o login: \n");
    scanf("%s", user_login);

    printf("Digite a senha: \n");
    scanf("%s", user_senha);

    if ((strcmp(login, user_login) == 0) && (strcmp(senha, user_senha) == 0)) {

        printf("Bem-Vindo! Acesso Liberado! \n");

    }
    else {

        printf("Usuário ou senha inválidos! \n");
    }
    
    printf("Aperte qualquer tecla para sair...");
    scanf("%s", sair);

    return 0;
}