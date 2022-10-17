#include <iostream>
#include "pilha.h"

using namespace std;

int main()
{
    stack stack;
    TipoItem item;
    int opcao;

    cout << "Programa gerador de pilha: \n";

    do
    {
        cout << "Digite 0 para sair do sistema: \n";
        cout << "Digite 1 para inserir a pilha: \n";
        cout << "Digite 2 para remover a pilha: \n";
        cout << "Digite 3 para imprimir  a pilha: \n";

        cin >> opcao;

        if (opcao == 1)
        {
            cout << "Digite o valor do elemento: \n";
            cin >> item;

            stack.inserir(item);
        }
        else if (opcao == 2)
        {
            stack.remover();
            cout << "Item removido com sucesso." << item << endl;

        }else if (opcao == 3)
        {
            stack.imprimir();
        }
        
    } while (opcao != 0);
    
    return 0;
}
