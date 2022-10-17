#include <iostream>
#include <string>

using namespace std;

int main()
{
    int contador = 0;

    cout << "universidade de brasilia\n" << endl;
	cout <<"disciplina: 113913 - icc \n";
	cout << "aluno (a): \n\n\n";

    cout << "Tabuada de 3: " << endl;

    while (contador <= 10)
    {
        cout << "3 x " << contador << " = " << 3 * contador << endl;

        ++contador; 
    }
}