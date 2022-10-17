#include <iostream>
#include "fila.h"

using namespace std;

queue::queue()
{
    primeiro = 0;
    ultimo = 0;
    estrutura = new TipoItem[max_itens];
}

queue::~queue()
{
    delete[] estrutura;
}

bool queue::estaCheio()
{
    return ((ultimo - primeiro) == max_itens);
}

bool queue::estaVazia()
{
    return (primeiro == ultimo);
}

void queue::inserir(TipoItem item)
{
    if (estaCheio())
    {
        cout << "A fila esta cheia. \n";
        cout << "Nao é possivel inserir elementos! \n";
    }
    else{
        estrutura[ultimo % max_itens] = item;
        ultimo++;
    }       
}

TipoItem queue::remover()
{
    if (estaVazia())
    {
        cout << "A fila esta vazia! \n";
        cout << "Nao tem elemento para ser removido! \n";

        return 0;

    }else{
        primeiro++;
        return estrutura[(primeiro - 1) % max_itens];
    }
}

void queue::imprimir()
{
    cout << "Fila: [ ";
    for (int i=primeiro ; i < ultimo ; i++){
        cout << estrutura[i % max_itens] << " ";
    }
    cout << "]\n";
}
