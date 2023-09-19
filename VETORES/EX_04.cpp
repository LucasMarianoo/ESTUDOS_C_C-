#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

/*
Ler 15 elementos de uma matriz tipo vetor. Construir uma matriz B de mesmo tipo, observando a
seguintes lei de formação: “Todo elemento de B deverá ser o quadrado do elemento de A
correspondente”. Apresentar as matrizes A e B.
*/

int main()
{
    int vetorA[15];
    int vetorB[15];

    for (int i = 0; i < 15; i++)
    {
        system("cls");
        cout << "Digite o " << i + 1 << "º elemento: " << endl;
        cin >> vetorA[i];
        vetorB[i] = pow(vetorA[i], 2);
    }

    for (int i = 0; i < 15; i++)
    {
        cout << "Vetor A: " << vetorA[i] << " - Vetor B: " << vetorB[i] << endl;        
    }
    return 0;
}