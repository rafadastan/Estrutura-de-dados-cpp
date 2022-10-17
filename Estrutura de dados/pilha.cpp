#include <iostream>
#include "pilha.h"

using namespace std;

stack::stack()
{
    tamanho = 0;
    estrutura = new TipoItem[max_itens];
}

stack::~stack()
{
    delete[] estrutura;
}

bool stack::estaCheio()
{
    return (tamanho == max_itens);
}

bool stack::estaVazia()
{
    return (tamanho == 0);
}

void stack::inserir(TipoItem item)
{
    if (estaCheio())
    {
        cout << "A pilha esta cheia\n";
        cout << "Nao é possivel inserir elementos!\n";
    }
    else{
        estrutura[tamanho] = item;
        tamanho++;
    }       
}

TipoItem stack::remover()
{
    if (estaVazia())
    {
        cout << "A pilha esta vazia!\n";
        cout << "Nao tem elemento para ser removido!\n";

        return 0;
    }else{
        tamanho --;
        return estrutura[tamanho-1];
    }
}

void stack::imprimir()
{
    cout << "Pilha: [ ";
    for (int i=0 ; i<tamanho ; i++){
        cout << estrutura[i] << " ";
    }
    cout << "]\n";
}

int stack::qualTamanho()
{
    return tamanho;
}