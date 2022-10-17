#include <iostream>
#include <string>

using namespace std;

int main()
{
    string primeiro_nome, segundo_nome;

    cout <<"FATEC Sao Caetano do Sul \n" << endl;
	
	cout << "Disciplina: Estrutura de Dados\n" << endl; 
	cout << "Alunas: Rita Aparecida Santos Fonseca\n e Jessica Avanzo e Jully Ferreira\n";
	
	
	cout << "universidade de brasilia\n" << endl;
	cout <<"disciplina: 113913 - icc \n";
	cout << "aluno (a): \n\n\n";

    cout << "Digite o numero de alunos: " << endl;
    cin >> primeiro_nome;

    cout << "Digite o numero de alunas: " << endl;
    cin >> segundo_nome;

    cout << "O numero de alunas: " << segundo_nome << endl;
    cout << "O numero de alunos: " << primeiro_nome << endl;

    return 0; 
}