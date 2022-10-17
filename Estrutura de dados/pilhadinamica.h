typedef int TipoItem;

struct Node
{
    TipoItem valor;
    Node* proximo;
};

class pilhadinamica
{
    private:
        Node* NodeTopo;
        
    public:
        pilhadinamica();
        ~pilhadinamica();
        bool estaVazio();
        bool estaCheio();
        void inserir(TipoItem item);
        TipoItem remover();
        void imprimir();
};
