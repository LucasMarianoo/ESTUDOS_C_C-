#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

/*
Elaborar um programa que efetue a leitura de três valores (A,B e C) e apresente como resultado final o
quadrado da soma dos três valores lidos.
*/

void diametro();
void raio();
void area();

int main()
{
    int opcao;

    system("cls");
    cout << "Digite a função desejada \n";
    cout << "1 - Calcular diâmetro \n";
    cout << "2 - Calcular raio \n";
    cout << "3 - Calcular área" << endl;
    cin >> opcao;

    switch (opcao)
    {
    case 1:
        diametro();
        break;
    case 2:
        raio();
        break;
    case 3:
        area();
        break;
    default:
        break;
    }
    system("pause");
    
    return 0;
}

void diametro()
{
    double diametro, raio;
    system("cls");
    cout << "Você selecionou: Diâmetro \n";
    cout << "Digite o valor do raio: \n";
    cin >> raio;
    diametro = raio * 2;
    cout << "O diâmetro da circunferência é de " << diametro << "cm" << endl;
    return;
}

void raio()
{
    int opcaoRaio;
    double circ, raio, area, diametro;
    system("cls");
    cout << "Você selecionou: Raio \n";
    cout << "Qual medida você possui? \n";
    cout << "1 - Circunferência \n";
    cout << "2 - Área \n";
    cout << "3 - Diâmetro \n";
    cin >> opcaoRaio;

    switch (opcaoRaio)
    {
        case 1:
            cout << "Digite a medida da circunferência: \n";
            cin >> circ;
            raio = circ / (2 * 3.14159);
            cout << "O raio da circunferência mede " << raio << "cm" << endl;
            break;

        case 2:
            cout << "Digite a medida da área da circunferência: \n";
            cin >> area;
            raio = pow((area/3.14159), 2);
            cout << "O raio da circunferência mede " << raio << "cm" << endl; 
            break;            

        case 3:
            cout << "Digite a medida do diâmetro da circunferência: \n";
            cin >> diametro;
            raio = diametro / 2;
            cout << "O raio da circunferência mede " << raio << "cm" << endl;
            break;

        default:
            cout << "Você não selecionou uma opção";
            system("pause");
            break;
    }
    return;
}

void area()
{
    double area, raio;
    system("cls");
    cout << "Você selecionou: Área \n";
    cout << "Digite o valor do raio: \n";
    cin >> raio;
    area = 3.14159 * pow(raio, 2);
    cout << "A área da circunferência é de " << area << "cm" << endl;
    return;
}
