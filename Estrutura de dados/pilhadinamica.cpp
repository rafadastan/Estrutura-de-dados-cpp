#include <iostream>
#include "pilhadinamica.h"
#include <cstddef> //NULL

using namespace std;

    pilhadinamica::pilhadinamica()
    {
        NodeTopo = NULL; 
    }

    pilhadinamica::~pilhadinamica()
    {
        Node* NodeTemp;

        while (NodeTemp != NULL)
        {
            NodeTemp = NodeTopo;
            NodeTopo= NodeTopo->proximo;
            delete NodeTemp;
        }
    }

    bool pilhadinamica::estaVazio()
    {
        return (NodeTopo == NULL);
    }

    bool pilhadinamica::estaCheio()
    {
        Node* NodeNovo;
        try
        {
            NodeNovo = new Node;
            delete NodeNovo;
            return false;    
        }
        catch(bad_alloc ex)
        {
            return true;
        }
    }

    void pilhadinamica::inserir(TipoItem item)
    {
        if(estaCheio())
        {
            cout << "Pilha cheia" << endl;
            cout << "Nao foi possivel inserir elemento \n";
        }else
        {
            Node* NodeNovo = new Node;
            NodeNovo->valor = item;
            NodeNovo->proximo = NodeTopo;
            NodeTopo = NodeNovo;
        }
    }

    TipoItem pilhadinamica::remover()
    {
        if (estaVazio())
        {
            cout << "Pilha vazia \n";
            cout << "Nao foi remover \n";

            return 0;
        }
        else
        {
            Node* NodeTemporario;
            NodeTemporario = NodeTopo;
            TipoItem item = NodeTopo->valor;
            NodeTopo = NodeTopo->proximo;
            delete NodeTemporario;
            return item;
        }
    }

    void pilhadinamica::imprimir()
    {
        Node* NodeTemp = NodeTopo;
        cout << "Pilha: [ ";
        while (NodeTemp != NULL)
        {
            cout << NodeTemp->valor << " ";
            NodeTemp = NodeTemp->proximo;
        }
        cout << "]\n";
    }
