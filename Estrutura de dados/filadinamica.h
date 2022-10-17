typedef int TipoItem;

class Node
{
    public:
        TipoItem valor;
        Node* proximo;
};

class filadinamica
{
    private:
        Node* primeiro;
        Node* ultimo;
        
    public:
        filadinamica();
        ~filadinamica();
        bool estaVazio();
        bool estaCheio();
        void inserir(TipoItem item);
        TipoItem remover();
        void imprimir();
};
