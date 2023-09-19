#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

/*
Ler duas matrizes A e B do tipo vetor com 15 elementos cada. Construir uma matriz C, sendo esta a
junção das duas outras matrizes. Desta forma, C deverá ter o dobro de elementos, ou seja, 30.
Apresentar a matriz C.
*/

int main()
{
    int vetorA[15];
    int vetorB[15];
    int vetorC[30];

    for (int i = 0; i < 15; i++)
    {
        system("cls");
        cout << i + 1 << "º valor do Vetor A: " << endl;
        cin >> vetorA[i];
    }

    for (int i = 0; i < 15; i++)
    {
        system("cls");
        cout << i + 1 << "º valor do Vetor B: " << endl;
        cin >> vetorB[i];
    }

    memcpy(vetorC, vetorA, sizeof(vetorA));
    memcpy(vetorC + sizeof(vetorA)/sizeof(int), vetorB, sizeof(vetorB));

    for (int i = 0; i < 30; i++)
    {
        cout << "Vetor C " << i + 1 << ": " << vetorC[i] << endl;
    }

    return 0;
}