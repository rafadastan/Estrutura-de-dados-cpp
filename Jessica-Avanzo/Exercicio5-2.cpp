#include <iostream>

using namespace std;

int main()
{
    int iddPedro, iddJoana;

    cout <<"FATEC Sao Caetano do Sul \n" << endl;
	
	cout << "Disciplina: Estrutura de Dados\n" << endl; 
	cout << "Alunas: Rita Aparecida Santos Fonseca\n e Jessica Avanzo e Jully Ferreira\n";
	
	
	cout << "universidade de brasilia\n" << endl;
	cout <<"disciplina: 113913 - icc \n";
	cout << "aluno (a): \n\n\n";

    cout << "Digite a idade do pedro: " << endl;
    cin >> iddPedro; 

    cout << "Digite a idade da joana: " << endl;
    cin >> iddJoana; 

    if(iddPedro > iddJoana)
        cout << "Pedro e mais velho " << endl;
    else if(iddJoana > iddPedro) 
        cout << "Joana e a mais velha " << endl;
    else
        cout << "Joana e pedro tem a mesma idade " << endl;
    return 0; 
}