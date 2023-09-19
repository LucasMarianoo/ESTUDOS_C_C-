#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

/*
Ler duas matrizes do tipo vetor, sendo A com 20 elementos e B com 30 elementos. Construir uma
matriz C, sendo esta a junção das duas outras matrizes. Desta forma, C deverá ter a capacidade de
armazenar 50 elementos. Apresentar a matriz C.
*/

int main()
{
    int vetorA[20];
    int vetorB[30];
    int vetorC[50];

    for (int i = 0; i < 20; i++)
    {
        system("cls");
        cout << i + 1 << "º valor do Vetor A: " << endl;
        cin >> vetorA[i];
    }

    for (int i = 0; i < 30; i++)
    {
        system("cls");
        cout << i + 1 << "º valor do Vetor B: " << endl;
        cin >> vetorB[i];
    }

    memcpy(vetorC, vetorA, sizeof(vetorA));
    memcpy(vetorC + sizeof(vetorA)/sizeof(int), vetorB, sizeof(vetorB));

    for (int i = 0; i < 50; i++)
    {
        cout << "Vetor C " << i + 1 << ": " << vetorC[i] << endl;
    }

    return 0;
}