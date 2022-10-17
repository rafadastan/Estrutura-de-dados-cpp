#include <iostream>

using namespace std;

int main()
{
    int num, contador = 1;

    cout <<"FATEC Sao Caetano do Sul \n" << endl;
	
	cout << "Disciplina: Estrutura de Dados\n" << endl; 
	cout << "Alunas: Rita Aparecida Santos Fonseca\n e Jessica Avanzo e Jully Ferreira\n";
	
	
	cout << "universidade de brasilia\n" << endl;
	cout <<"disciplina: 113913 - icc \n";
	cout << "aluno (a): \n\n\n";

    cout << "Digite um numero inteiro: " << endl;
    cin >> num;

    cout << "Tabuada de " << num << endl;

    while (contador <= 10)
    {
        cout << num << " x " << contador << " = " << num * contador << endl;

        ++contador;
    }
    

    return 0;
}