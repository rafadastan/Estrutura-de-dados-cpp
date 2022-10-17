typedef int TipoItem;
const int max_itens = 100;

class stack
{
    private:
    int tamanho;
    TipoItem* estrutura;

    public:
    stack();
    ~stack();
    bool estaCheio();
    bool estaVazia();

    void inserir(TipoItem item);
    TipoItem remover();
    void imprimir();
    int qualTamanho();
};