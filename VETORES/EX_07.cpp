#include <iostream>
#include <cstdlib>

using namespace std;

/*
Ler 20 elementos de uma matriz A tipo vetor e construir uma matriz B de mesma dimensão com os
mesmo elementos da matriz A, sendo que deverão estar invertidos. Ou seja, o primeiro elemento de
A passa a ser o último de B, o segundo elemento de A passa a ser o penúltimo elemento de B e
assim por diante. Apresentar as matrizes A e B lado a lado.
*/

int main()
{
    int const n = 5; // valor reduzido para caber no print
    int vetorA[n];
    int vetorB[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Valor " << i + 1 << endl;
        cin >> vetorA[i];
    }

    for (int i = 0; i < n; i++)
    {
        vetorB[i] = vetorA[n - 1 - i];
    }


    cout << "A | B " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vetorA[i] << " | " << vetorB[i] << endl;
    }

    return 0;
}
    