#include <iostream>
#include "filadinamica.h"
#include <cstddef> //NULL

using namespace std;

filadinamica::filadinamica()
{
    primeiro = NULL;
    ultimo = NULL;
}

filadinamica::~filadinamica()
{
    Node* Temp;

    while (primeiro != NULL)
    {
        Temp = primeiro;
        primeiro = primeiro->proximo;
        delete Temp;
    }

    ultimo = NULL;
}

bool filadinamica::estaVazio()
{
    return (primeiro == NULL);
}

bool filadinamica::estaCheio()
{
    Node* temp;
    try
    {
        temp = new Node;
        delete temp;
        return false;    
    }
    catch(bad_alloc ex)
    {
        return true;
    }
}

void filadinamica::inserir(TipoItem item)
{
    if(estaCheio())
    {
        cout << "Pilha cheia" << endl;
        cout << "Nao foi possivel inserir elemento \n";
    }else
    {
        Node* NodeNovo = new Node;
        NodeNovo->valor = item;
        NodeNovo->proximo = NULL;
        if (primeiro == NULL)
        {
            primeiro = NodeNovo;
        }else{
            ultimo->proximo = NodeNovo;
        }
        ultimo = NodeNovo;
    }
}

TipoItem filadinamica::remover()
{
    if (estaVazio())
    {
        cout << "Pilha vazia \n";
        cout << "Nao foi remover \n";

        return 0;
    }
    else
    {
        Node* temp;
        TipoItem item = primeiro->valor;
        primeiro = primeiro->proximo;
        if (primeiro == NULL)
        {
            ultimo = NULL;
        }
        delete temp;
        return item;
    }
}

void filadinamica::imprimir()
{
    Node* temp = primeiro;
    cout << "FILA DINAMICA: [ ";
    while (temp != NULL)
    {
        cout << temp->valor << " ";
        temp = temp->proximo;
    }
    cout << "]\n";
}
