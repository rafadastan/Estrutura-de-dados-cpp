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

    cout << "Existem " << marcaA << " chuteiras da marca A " << endl;
    cout << "Existem " << marcaB << " chuteiras da marca B " << endl;
    cout << "Existem " << marcaC << " chuteiras da marca C " << endl;

    cout << "Existem "<< marcaA << " chuteiras da marca A, " <<  marcaB << " da marca B, " << marcaC << " da marca C \n" << endl;

    cout << "\t\t Quantidade de chuteira em estoque " << endl;
    cout << "\t\t Marca A \t Marca B \t Marca C \n" << endl;
    
    cout << "\t\t" << marcaA << "\t" << marcaB << "\t" << marcaC << "\n\n" << endl;

    return 0;
}