#include <iostream>
#include <cstdlib>

using namespace std;

/*
Ler duas matrizes A e B do tipo vetor com 20 elementos. Construir uma matriz C, onde cada
elemento de C é a subtração do elemento correspondente de A com B. Apresentar a matriz C.
*/

int main()
{
    int vetorA[20];
    int vetorB[20];
    int vetorC[20];

    for (int i = 0; i < 20; i++)
    {
        system("cls");
        cout << "Digite o " << i + 1 << "º elemento do vetor A: " << endl;
        cin >> vetorA[i];
        cout << "Digite o " << i + 1 << "º elemento do vetor B: " << endl;
        cin >> vetorB[i];
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    for (int i = 0; i < 20; i++)
    {
        cout << i + 1 << "º = " << vetorC[i] << endl;        
    }
    
    return 0;
}