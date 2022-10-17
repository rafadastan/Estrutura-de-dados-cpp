#include <iostream>

using namespace std;

int main()
{
    int question = 1;
    int numVet;
    int *vetor;
    int *NovoVet;

    vetor = (int*)malloc(sizeof(int)*numVet); 
    NovoVet = (int*)malloc(sizeof(int)*numVet); 

    while (question == 1)
    {
        cout << "Qual o tamanho do vetor? " << endl;
        cin >> numVet;

        for (int i = 0; i <= numVet; i++)
        {
            cout << "Digite os valores do vetor: " << endl;

            cin >> vetor[i];
        }
        cout << endl;

        //NovoVet = vetor;

        for (int i = 0; i <= numVet; i++)
        {
            NovoVet = vetor;
            cout << "os valores do vetor e: " << NovoVet[i] << endl;
        }
        
        cout << "Deseja continuar? 1 - sim e 2 - nao" << endl;
        cin >> question;

        if(question != 1)
            break;
    }
    
    return 0;
}