#include <iostream> //Biblioteca do c++ para cout, int, cin entre outros comandos 
#include <conio.h> // Biblioteca do getche

using namespace std; //ele e o espaço de nomes padrão da linguagem.

int main()
{
    int num; //declaracao da variavel

    //Cabecalho
    cout <<"FATEC Sao Caetano do Sul \n" << endl;
	
	cout << "Disciplina: Estrutura de Dados\n" << endl; 
	cout << "Aluna: Jessica Avanzo\n";
	
	cout << "universidade de brasilia\n" << endl;
	cout <<"disciplina: 113913 - icc \n";
	cout << "aluno (a): Jessica Avanzo\n\n\n";

    cout << "Digite um numero positivo: " << endl; //Exibicao da mensagem no console
    
    //Armazenamento do valor digitado pelo usuario na variavel num
    cin >> num;

    //Validacao se o usuario digitou algum numero negativo
    while (num < 0)
    {
        //Exibicao da mensagem no console o endl e para pular linha
        cout << "Erro! Digite um numero positivo: " << endl; 
        cin >> num;
    }
    
    //informar ao usuario
    cout << "Os numeros impares menores que " << num << " e maiores do que 1 sao: " << num << endl; 

    //Verifica se o numero e par, caso nao seja ele passa para o else
    if (num%2 == 0)
    {
        num--;
    }
    else
    {
        num = num - 2;
    }
    
    while (num > 1)
    {
        cout << " " << num << endl;
        num = num - 2;
    }
    
    //Aguarda alguma tecla para fechar o programa
    getche();

    //main e um metodo inteiro e precisa de um retorno inteiro
    return 0;
}