#include <iostream>

using namespace std;

int main()
{
    int* idade1 = new int;
    int* idade2 = new int;

    cout << "Idade 1 : \n";
    cin >> *idade1;

    cout << "Idade 2 : \n";
    cin >> *idade2;


    float* media = new float;
    
    *media = (*idade1 + *idade2) / 2;

    cout << "Media de idade : " << *media << endl; 

    return 0;
}