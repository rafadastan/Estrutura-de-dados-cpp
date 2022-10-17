#include <iostream>

using namespace std;

int calcularPotencia(int numero, int potencia)
{
    if (numero == 0 || potencia == 0)
    {
        return 0;
    }else if(numero == 1 && potencia == 1)
    {
        return 1;
    }
    
    int modular = 1;
    for (int i = 0; i < potencia; i++)
    {
        modular *= numero; 
    }
    
    return modular;
}

int main()
{
    while (true)
    {
        int numero, potencia;
    
        cout << "Entre com o numero: " << endl;
        cin >> numero;

        cout << "Entre com a potencia: " << endl;
        cin >> potencia;

        if (numero < 0 && potencia < 0)
        {
            cout << "Por favor insira valores positivos\n";
        }
        
        cout << "Resultado: " << calcularPotencia(numero, potencia) << endl;

        int desejaContinuar;

        cout << "Deseja continuar calculando potencia? 1 - Sim e 0 - Nao \n";
        cin >> desejaContinuar;

        if(desejaContinuar == 0)
            break;
    }
    
    

    return 0;
}