#include <iostream>

using namespace std;

#define pi 3.14;
#define curtir cout << "voce curtiu isto\n";

void inscrever()
{
    cout << "Se inscreva no canal\n";   
}

int somar(int &x, int &y)
{
    int soma;

    soma = x+y;

    x = 30;

    return soma; 
}

int main()
{
    inscrever();
    int a = 5, b = 4;
    int s;

    s = somar(a,b);

    cout << "A soma : " << s << endl;
    cout << "Valor de pi: " << pi;

    cout << endl;

    curtir;

    cout << "valor de a: " << a << endl;

    return 0;
}