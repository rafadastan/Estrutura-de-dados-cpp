#include <iostream>
#include <string>

using namespace std;

string RepresentacaoMes(int num)
{
    switch (num)
    {
        case 1:
            cout << "O numero corresponde ao mes de Janeiro. \n";
            break;
        case 2:
            cout << "O numero corresponde ao mes de Fevereiro. \n";
            break;
        case 3:
            cout << "O numero corresponde ao mes de Marco. \n";
            break;
        case 4:
            cout << "O numero corresponde ao mes de Abril. \n";
            break;
        case 5:
            cout << "O numero corresponde ao mes de Maio. \n";
            break;
        case 6:
            cout << "O numero corresponde ao mes de Junho. \n";
            break;
        case 7:
            cout << "O numero corresponde ao mes de Julho. \n";
            break;
        case 8:
            cout << "O numero corresponde ao mes de Agosto. \n";
            break;
        case 9:
            cout << "O numero corresponde ao mes de Setembro. \n";
            break;
        case 10:
            cout << "O numero corresponde ao mes de Outubro. \n";
            break;
        case 11:
            cout << "O numero corresponde ao mes de Novembro. \n";
            break;
        case 12:
            cout << "O numero corresponde ao mes de Dezembro. \n";
            break;  
        default:
            cout << "O numero nao corresponde a nenhum mes do ano. \n";
            break;
    }
}

int main()
{
    int num;
    string resultado;

    cout <<"FATEC Sao Caetano do Sul \n" << endl;
	
	cout << "Disciplina: Estrutura de Dados\n" << endl; 
	cout << "Alunas: Rita Aparecida Santos Fonseca\n e Jessica Avanzo e Jully Ferreira\n";
	
	cout << "universidade de brasilia\n" << endl;
	cout <<"disciplina: 113913 - icc \n";
	cout << "aluno (a): \n\n\n";

    cout << "Digite o numero inteiro de 1 a 12 correspondente ao mes desejado: " << endl;
    cin >> num;

    resultado = RepresentacaoMes(num);

    cout << resultado << endl;

    return 0;
}
