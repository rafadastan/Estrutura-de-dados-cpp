#include <iostream> //Biblioteca do c++ para cout, int, cin entre outros comandos 
#include <conio.h> // Biblioteca do getche

using namespace std; //ele e o espaço de nomes padrão da linguagem.

int main()
{
    int alunos, alunas; //declaracao da variavel

    //Cabecalho
    cout <<"FATEC Sao Caetano do Sul \n" << endl;
	
	cout << "Disciplina: Estrutura de Dados\n" << endl; 
	cout << "Aluna: Jessica Avanzo\n";
	
	cout << "universidade de brasilia\n" << endl;
	cout <<"disciplina: 113913 - icc \n";
	cout << "aluno (a): Jessica Avanzo\n\n\n";

    //Inicio do programa
    cout << "Digite o numero de alunos: " << endl;
    cin >> alunos;

    cout << "Digite o numero de alunas: " << endl;
    cin >> alunas;

    //Estrutura condicional composta
    if (alunos > alunas)
    {
        cout << "O numero de alunos: " << alunos << endl;
        cout << "O numero de alunas: " << alunas << endl;
    }else if (alunas > alunos)
    {
        cout << "O numero de alunas: " << alunas << endl;
        cout << "O numero de alunos: " << alunos << endl;
    }else{
        cout << "O numero de alunos sao iguais " << endl;
    }
    
    //Aguarda alguma tecla para fechar o programa
    getche();

    //main e um metodo inteiro e precisa de um retorno inteiro
    return 0;
}