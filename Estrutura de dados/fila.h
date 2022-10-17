typedef int TipoItem;
const int max_itens = 100;

class queue
{
    private:
    int primeiro, ultimo;
    TipoItem* estrutura;

    public:
    queue();
    ~queue();
    bool estaCheio();
    bool estaVazia();

    void inserir(TipoItem item);
    TipoItem remover();
    void imprimir();
};