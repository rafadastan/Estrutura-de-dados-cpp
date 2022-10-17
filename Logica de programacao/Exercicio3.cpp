#include <iostream>

using namespace std;

int FatorialRecursivo(int fat)
{
    if (fat <= 1)
    {
        return 1;
    }
    else
    {
        return FatorialRecursivo(fat - 1) * fat;
    }
}

int Fatorial(int valor)
{
    int fat = 1;

    for (int i = 1; i <= valor; i++)
    {
        fat = fat * i;
    }
    
    return fat;
}

int main()
{
    int fatorial;

    cout << "Entre com valor positivo: \n";
    cin >> fatorial;

    cout << "O valor de fatorial: " << FatorialRecursivo(fatorial);
    return 0;
}