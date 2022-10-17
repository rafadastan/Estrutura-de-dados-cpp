#include <iostream>

using namespace std;

class carro
{
    private: int ano;
    float valor, km;

    public:

    carro(int a =0, float v = -1, float k = -1)
    {
        ano = a;
        valor = v;
        k = km;
    }

    void setano(int anoCarro)
    {
        ano = anoCarro;
        //this->ano = ano;
    }

    int getano()
    {
        return ano;
    }

    void setValor(float valor)
    {
        this->valor = valor;
    }

    float getValor()
    {
        return valor;
    }

    void setKm(float k)
    {
        km = k;
    }

    float getKm()
    {
        return km;
    }
};

int main()
{
    cout << "==========================================" << endl; 

    carro palio;

    palio.setano(2005);
    palio.setValor(12000);
    palio.setKm(200000);

    cout << "Palio: \n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "Valor: " << palio.getValor() << endl;
    cout << "Quilometragem: " << palio.getKm() << endl;

    cout << "==========================================" << endl; 

    carro celta;

    celta.setano(2012);
    celta.setValor(15000);
    celta.setKm(10000);

    cout << "Palio: \n";
    cout << "Ano: " << celta.getano() << endl;
    cout << "Valor: " << celta.getValor() << endl;
    cout << "Quilometragem: " << celta.getKm() << endl;

    cout << "==========================================" << endl; 
 

    return 0;
}