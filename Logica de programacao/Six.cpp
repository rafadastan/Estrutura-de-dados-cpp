#include <iostream>

using namespace std;

int main()
{
    int n;
    int soma = 0;
    int count = 1;

    cout << "Entre com o numero nao negativo: \n";
    cin >> n;

    while (count <= n)
    {
        soma += count;
        count++;
    }
     
    cout << "Soma de 0 ate " << n << " = " << soma << endl;

    return 0;
}