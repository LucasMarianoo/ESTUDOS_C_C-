#include <iostream>
#include "math.h"
#include "cstdlib"

using namespace std;

/*
Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da fórmula
VOLUME  COMPRIMENTO * LARGURA * ALTURA.
*/

double comprimento();
double largura();
double altura();
double volume(double comprimento, double largura, double altura);

int main()
{
    double comp, larg, alt, vol;
    comp = comprimento();
    larg = largura();
    alt = altura();
    vol = volume(comp, larg, alt);
    cout << "O volume é de: " << vol << "m3" << endl;  
    system("pause");
    return 0;
}

double comprimento()
{
    double comprimento;
    cout << "Digite o comprimento: ";
    cin >> comprimento;
    return comprimento;
}

double largura()
{
    double largura;
    cout << "Digite a largura: ";
    cin >> largura;
    return largura;    
}

double altura()
{
    double altura;
    cout << "Digite a altura: ";
    cin >> altura;
    return altura;
}

double volume(double comprimento, double largura, double altura)
{
    double volume;

    volume = comprimento * largura * altura;

    return volume;
}