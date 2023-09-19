#include <iostream>
#include <cstdlib>

using namespace std;

/*
Ler 8 elementos em uma matriz A tipo vetor. Construir uma matriz B de mesma dimensão com os
elementos da matriz A multiplicados por 3. O elemento B[i] deverá ser implicado pelo elemento
A[i]*3, o elemento B[2] implicado pelo elemento A[2]*3 e assim por diante, até 8. Apresentar o vetor
B.
*/

int main()
{
    int vetorA[8];
    int vetorB[8];

    for (int i = 0; i < 8; i++)
    {
        system("cls");
        cout << "Digite o " << i + 1 << "º elemento: " << endl;
        cin >> vetorA[i];
        vetorB[i] = vetorA[i] * 3;
    }

    for (int i = 0; i < 8; i++)
    {        
        cout << i + 1 << "º = " << vetorB[i] << endl; 
    }

    return 0;
}