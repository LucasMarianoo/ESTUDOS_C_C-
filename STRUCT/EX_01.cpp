#include <iostream>
#include <cstdlib>

using namespace std;

/*
Elaborar um programa de computador que efetue a leitura de quatro valores inteiros (variáveis A, B, C e
D). Ao final o programa deve apresentar o resultado do produto (variável P) do primeiro com o terceiro
valor, e o resultado do produto (variável P) do primeiro com o terceiro valor, e o resultado da soma
(variável S) do segundo com o quarto valor.
*/

int const n = 4;

struct valores 
{
    int valor[n];
    int result[n];
};
struct valores tb; 

int lerValores();
void guardarDados();
void produto();


int main()
{
    
    int opt = 0;

    while (opt != 3)
    {
        system("cls");
        cout << "\n 1 - ler valores";
        cout << "\n 2 - Exibir resultado";
        cout << "\n 3 - Sair" << endl;
        cin >> opt;

        switch (opt)
        {
        case 1:
            guardarDados();
            break;

        case 2:
            produto();
            system("pause");
            break;

        case 3:
            exit(0);
            break;
        }
    }

    return 0;
}

int lerValores()
{
    int num;

    cout << "Valor: " << endl;
    cin >> num;

    return num;
}

void guardarDados()
{
    for (int i = 0; i < n; i++ )
    {
        tb.valor[i] = lerValores();  
    }  
}

void produto()
{
    tb.result[0] = tb.valor[0] * tb.valor[2];
    tb.result[1] = tb.valor[1] + tb.valor[3];
    cout << "\n Valor 1: " << tb.result[0];
    cout << "\n Valor 2: " << tb.result[1] << endl;
}