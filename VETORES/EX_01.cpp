#include <iostream>
#include <cstdlib>

using namespace std;

/*
Ler 10 elementos de uma matriz tipo vetor e apresentá-los.
*/

int main()
{
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        system("cls");
        cout << "Digite o " << i + 1 << "o elemento: \n ";
        cin >> vetor[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << "º = " << vetor[i] << endl;
    }

    return 0;
}