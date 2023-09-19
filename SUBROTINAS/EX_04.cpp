#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

/*
Elaborar um programa que efetue a leitura de três valores (A, B e C) e apresente como resultado final à
soma dos quadrados dos três valores lidos.
*/

void resultado(int a, int b, int c);

int main()
{
    int a, b, c;
    
    cout << "Digite o primeiro valor: \n";
    cin >> a;

    cout << "Digite o segundo valor: \n";
    cin >> b;

    cout << "Digite o terceiro valor: \n";
    cin >> c;

    resultado(a, b, c);

    return 0;
}

void resultado(int a, int b, int c)
{
    int result = pow(a, 2) + pow(b, 2) + pow(c, 2);
    cout << "A soma dos quadrados é: " << result << endl;
    return;
}
