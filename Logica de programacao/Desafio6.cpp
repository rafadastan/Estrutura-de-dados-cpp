#include <iostream>

using namespace std;

int main()
{
    float gastosFamilia[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite os gastos: " << i+1 << endl;
        cin >> gastosFamilia[i];
    }
    
    float media = 0;

    for (int i = 0; i < 5; i++)
    {
        media += gastosFamilia[i];
    }
    
    media /= 5;

    cout << "Media gastos: " << media << endl;

    for (int i = 0; i < 5; i++)
    {
        if (gastosFamilia[i] < media)
        {
            cout << "A familia " << i+1 << " tem gasto abaixo da media\n";
        }else if(gastosFamilia[i] == media)
        {
            cout << "A familia " << i+1 << " tem gasto na media\n";

        }else{
            cout << "A familia " << i+1 << " tem gasto acima da media\n";
        }
        
    }
    
}