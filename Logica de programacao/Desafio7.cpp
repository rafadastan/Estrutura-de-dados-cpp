#include <iostream>

using namespace std;

int main()
{
    int linhas, colunas;

    cout << "Quantidade de linhas: " << endl;
    cin >> linhas;

    cout << "Quantidade de colunas: " << endl;
    cin >> colunas;

    float matriz1[linhas][colunas], matriz2[linhas][colunas];
    cout << "Digite os elementos da matriz 1: \n";

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "digite o elemento da linha: " << i+1 << " e coluna: " << i+1 << endl;
            cin >> matriz1[i][j];
        }
    }

    cout << endl;

    cout << "Digite os elementos da matriz 2: \n";
    
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "digite o elemento da linha: " << i+1 << " e coluna: " << i+1 << endl;
            cin >> matriz2[i][j];
        }
    }

    float matrizSoma[linhas][colunas];
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matrizSoma[linhas][colunas] = matriz1[i][j] + matriz2[i][j];
        }       
    }
    
    cout << "RESULTADO: \n";
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << matrizSoma[linhas][colunas] << " ";
        }       

        cout << endl;
    }
     
    return 0;
}