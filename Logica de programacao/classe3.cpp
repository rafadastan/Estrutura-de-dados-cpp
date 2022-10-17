#include <iostream>

using namespace std;

class carro
{
    private:
        int ano;
        float valor, km;

    public:

        carro(int a, float v, float k);

        void setano(int anoCarro);

        int getano();

        void setValor(float valor);

        float getValor();

        void setKm(float k);

        float getKm();
};

int main()
{
    return 0;
}

carro::carro(int a =0, float v = -1, float k = -1)
{
    ano = a;
    valor = v;
    k = km;
}

void carro::setano(int anoCarro)
{
    ano = anoCarro;
    //this->ano = ano;
}

int carro::getano()
{
    return ano;
}

void carro::setValor(float valor)
{
    this->valor = valor;
}

float carro::getValor()
{
    return valor;
}

void carro::setKm(float k)
{
    km = k;
}

float carro::getKm()
{
    return km;
} 