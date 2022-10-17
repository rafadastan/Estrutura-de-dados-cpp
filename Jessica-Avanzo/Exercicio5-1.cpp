#include <iostream>

using namespace std;

int main()
{
    int alunos, alunas;

    cout <<"FATEC Sao Caetano do Sul \n" << endl;
	
	cout << "Disciplina: Estrutura de Dados\n" << endl; 
	cout << "Alunas: Rita Aparecida Santos Fonseca\n e Jessica Avanzo e Jully Ferreira\n";
	
	
	cout << "universidade de brasilia\n" << endl;
	cout <<"disciplina: 113913 - icc \n";
	cout << "aluno (a): \n\n\n";

    cout << "Digite o numero de alunos: " << endl;
    cin >> alunos;

    cout << "Digite o numero de alunas: " << endl;
    cin >> alunas;

    if(alunos > alunas)
    {
        cout << "O numero de alunos = " << alunos << endl;
        cout << "O numero de alunas = " << alunas << endl;
    }else if(alunas > alunos)
    {
        cout << "O numero de alunas = " << alunas << endl;
        cout << "O numero de alunos = " << alunos << endl;
    }else
    {
        cout << "O numero de alunas e alunos sao iguais" << endl;
    }

    return 0;
}