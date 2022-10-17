#include <iostream>
#include "fila.h"

using namespace std;

int main()
{
    queue queue;
    TipoItem item;
    int opcao;

    cout << "Programa gerador de filas: \n";

    do
    {
        cout << "Digite 0 para sair do sistema: \n";
        cout << "Digite 1 para inserir a fila: \n";
        cout << "Digite 2 para remover a fila: \n";
        cout << "Digite 3 para imprimir a fila: \n";

        cin >> opcao;

        if (opcao == 1)
        {
            cout << "Digite o valor do elemento: \n";
            cin >> item;

            queue.inserir(item);
        }
        else if (opcao == 2)
        {
            queue.remover();
            cout << "Item removido com sucesso." << item << endl;

        }else if (opcao == 3)
        {
            queue.imprimir();
        }
        
    } while (opcao != 0);
    
    return 0;
}
