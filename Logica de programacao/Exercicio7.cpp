#include <iostream>

using namespace std;


// int main()
// {
//     int matriz1[2][2];
//     int matriz2[2][2];
//     int matriz3[2][2];

//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <= 2; j++)
//         {
//             cout << "Matriz 1 valores: " << endl;
//             cin >> matriz1[i][j];
//         }
//     }

//     cout << endl;

//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <= 2; j++)
//         {
//             cout << "Matriz 2 valores: " << endl;
//             cin >> matriz2[i][j];
//         }
//     }
    
//     cout << endl;

//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <= 2; j++)
//         {
//             matriz3[2][2] = matriz1[i][j] + matriz2[i][j];
//             cout << endl;
//             cout << "A soma das matrizes e: " << matriz3[2][2];
//         }   
//     }
// }

int main()
{
   int matrizX1, i, j;
   int matrizY1;

    cout << "Entre com numero de linhas da matriz: " << endl;
    cin >> matrizX1;

    cout << "Entre com o numero de colunas da matriz: " << endl;
    cin >> matrizY1;

    int matriz1[matrizX1][matrizY1];
    int matriz2[matrizX1][matrizY1];
    int matriz3[0][0];

    for (i = 0; i <= matrizX1; i++)
    {
        for (j = 0; j < matrizY1; j++)
        {
            cout << "Entre com os valores da matriz 1: " << endl;
            cin >> matriz1[i][j];
        }
        
        cout << endl;
    }
    
    cout << endl;

    for ( i = 0; i <= matrizX1; i++)
    {
        for (j = 0; j <= matrizY1; j++)
        {
            cout << "Entre com os valores da matriz 2: " << endl;
            cin >> matriz1[i][j];
        }
        
        cout << endl;
    }
    
    cout << endl;

    for ( i = 0; i <= matrizX1; i++)
    {
        for (j = 0; j <= matrizY1; j++)
        {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }

        cout << endl;
    }
    
    cout << endl;

    return 0;
}
