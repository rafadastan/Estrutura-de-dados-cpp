#include <iostream>

using namespace std;

int main()
{
    int marcaA, marcaB, marcaC;

    cout << "universidade de brasilia\n" << endl;
	cout <<"disciplina: 113913 - icc \n";
	cout << "aluno (a): \n\n\n";

    cout << "Digite a quantidade de chuteira da marca A: " << endl;
    cin >> marcaA;

    cout << "Digite a quantidade de chuteira da marca B: " << endl;
    cin >> marcaB;

    cout << "Digite a quantidade de chuteira da marca C: " << endl;
    cin >> marcaC;

    cout << "Existem %d chuteiras da marca A " << marcaA << endl;
    cout << "Existem %d chuteiras da marca B " << marcaB << endl;
    cout << "Existem %d chuteiras da marca C " << marcaC << endl;

    cout << "Existem %d chuteiras da marca A, %d da marca B, %d da marca C \n" << marcaA, marcaB, marcaC << endl;

    cout << "\t\t Quantidade de chuteira em estoque " << endl;
    cout << "\t\t %d \t %d \t %d \n\n" , marcaA, marcaB, marcaC;

    return 0;
}