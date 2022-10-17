#include <iostream>

using namespace std;

int main()
{
    int tamanho;
    int question;

    do
    {
        cout << "Digite o tamanho do vetor: \n";
        cin >> tamanho;

        float* vetor = new float[tamanho];

        for (int i = 0; i < tamanho; i++)
        {
            cout << "Digite o elemento " << i+1 << " deste vetor \n";
            cin >> vetor[i];
        }
        
        cout << "O vetor inserido e: \n [ ";

        for (int i = 0; i < tamanho; i++)
        {
            cout << vetor[i] << " ";
        }
        
        cout << "]\n";

        cout << "Se deseja continuar? 1 - SIM ou 0 - NAO; ";
        cin >> question;

        delete[] vetor;

    } while (question == 1);
    

    return 0;
}
