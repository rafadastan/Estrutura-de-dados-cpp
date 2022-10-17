#include <iostream>
#include <math.h>

using namespace std;

float FuncaoDeX(float x)
{
    float resultado;

    return resultado = x * x - 3*x + 5;
}

int main()
{
    float valorDeX;

    cout << "Informe e valor real: \n";
    cin >> valorDeX;    

    cout << "O valor: f(" << FuncaoDeX(valorDeX) << ")";

    return 0;
}