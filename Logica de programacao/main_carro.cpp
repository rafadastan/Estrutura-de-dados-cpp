#include <iostream>
#include "carro.h"

using namespace std;

int main()
{
    cout << "==========================================" << endl; 

    carro palio(1995,1000, 150000);

    // palio.setano(2005);
    // palio.setValor(12000);
    // palio.setKm(200000);

    cout << "Palio: \n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "Valor: " << palio.getValor() << endl;
    cout << "Quilometragem: " << palio.getKm() << endl;

    cout << "==========================================" << endl; 

    carro celta(2015,155874, 14447);

    // celta.setano(2012);
    // celta.setValor(15000);
    // celta.setKm(10000);

    cout << "Palio: \n";
    cout << "Ano: " << celta.getano() << endl;
    cout << "Valor: " << celta.getValor() << endl;
    cout << "Quilometragem: " << celta.getKm() << endl;

    cout << "==========================================" << endl; 
 
    system("pause");

    return 0;
}