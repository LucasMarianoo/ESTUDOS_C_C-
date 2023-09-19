#include <iostream>
#include "math.h"
#include "cstdlib"

using namespace std;

/*
Ler dois inteiros (variáveis A e B) e imprimir o resultado do quadrado da diferença do primeiro valor pelo
segundo.
*/

void resultado(int a, int b);

int main()
{
    int a, b;

    cout << "Digite o valor A: ";
    cin >> a;

    cout << "Digite o valor B: ";
    cin >> b;
    
    resultado(a, b);
    system("pause");
    return 0;
}

void resultado(int a, int b)
{
    int result = pow((a - b), 2);
    cout << result << endl;
    return;
}
