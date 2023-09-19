#include <iostream>
#include <cstdlib>

using namespace std;

/*
Ler o valor correspondente ao salário mensal (variável SM) de um trabalhador e também o valor do
percentual de reajuste (variável PR) a ser atribuído. Apresentar o valor do novo salário (variável NS).
*/

const int n = 2;
int linha = -1;

struct salario
{
    double mensal[n];
    double perAjuste[n];
    double valorAjuste[n];
};
struct salario sal;

void lerDados();
void calcAjuste();
void exibir();


int main()
{
    int opt = 0;

    while (opt != 3)
    {
        system("cls");
        cout << "\n 1 - Ler Salários";
        cout << "\n 2 - Exibir reajustes";
        cout << "\n 3 - Sair" << endl;
        cin >> opt;

        switch (opt)
        {
        case 1:
            lerDados();
            calcAjuste();
            break;

        case 2:
            exibir();
            system("pause");
            break;
            
        case 3:
            exit(0);
            break;

        }
    }

    return 0;
}

void lerDados()
{
    linha++;    
    cout << "\nDigite o salário: ";
    cin >> sal.mensal[linha];
    cout << "\nDigite o ajuste em percentual de 0 a 100: ";
    cin >> sal.perAjuste[linha];

    return;
}

void calcAjuste()
{
    for (int i = 0; i <= linha; i++)
    {
        sal.valorAjuste[i] = sal.mensal[i] * (1 + (sal.perAjuste[i]/100));
    }

    return;
}

void exibir()
{
    for (int i = 0; i <= linha; i++)
    {
        cout << "\nSalário Anterior: " << sal.mensal[i];
        cout << "\nPercentual de reajuste: " << sal.perAjuste[i];
        cout << "\nValor reajustado: " << sal.valorAjuste[i] << endl;; 
    }    

    return;
}