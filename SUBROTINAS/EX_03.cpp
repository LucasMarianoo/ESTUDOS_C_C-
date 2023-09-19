#include <iostream>
#include <math.h>
#include <cstdlib>
#include <locale.h>

using namespace std;

/*
Elaborar um programa que efetue a apresentação do valor da conversão em dólar de um valor lido em
real. O programa deve solicitar o valor da cotação do dólar e também a quantidade de reais disponível
com o usuário, para que seja apresentado o valor em moeda americana
*/

void conversao(double cotacao, double carteira);

int main()
{
    setlocale(LC_ALL, "pt-BR");
    
    double cotacao, carteira;

    cout << "Digite a cotação do dolar atual: ";
    cin >> cotacao;

    cout << "Digite o valor disponível em reais: ";
    cin >> carteira;

    conversao(cotacao, carteira);

    return 0;
}

void conversao(double cotacao, double carteira)
{
    double conv = cotacao * carteira;
    cout << "O valor convertido em dólar é: U$" << conv << endl;
    return;
}
