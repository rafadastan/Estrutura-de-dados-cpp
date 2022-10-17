#include <iostream>
#include <stdlib.h>

using namespace std;/* é do padrão c++ não do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main(int argc, char** argv){/* DECLARAÇÃO DE VARIAVEIS*/



	
	int idade, referencia=18;
	char nome, joana, pedro;
	
	cout <<"FATEC São Caetano do Sul \n"; /*mudança do printf para o cout<<*/
	
	cout << "Disciplina: Estrutura de Dados\n"; /*mudança do printf para o cout<<*/
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudança do printf para o cout<<*/
	
	
	cout << "universidade de brasilia\n", 161;/*mudança do printf para o cout<<*/
	cout <<"disciplina: 113913 - icc \n";/*mudança do printf para o cout<<*/
	cout << "aluno (a): \n\n\n";/*mudança do printf para o cout<<*/
	
	/*CIN ENTRADA DE DADOS (LÊ UM CONJUNTO DE DADOS ONDE A INFORMAÇÃO ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIREÇAO A VARIÁVEL>>)*/
		/*COUT SAÍDA DE DADOS A INFORMAÇÃO ESTA SAINDA DA VARIAVEL INDO PARA A SAÍDA PADRÃO << */

	
	
	/*CIN ENTRADA DE DADOS (LÊ UM CONJUNTO DE DADOS ONDE A INFORMAÇÃO ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIREÇAO A VARIÁVEL>>)*/
	/*COUT SAÍDA DE DADOS A INFORMAÇÃO ESTA SAINDO DA VARIAVEL INDO PARA A SAÍDA PADRÃO << */
	
	/*INÍCIO DA LÓGICA*/
	
	
	cout << "digite seu nome\n";/*mudança do printf para o cout<<*/
	cin >> nome;/*mudança do scanf para o cin<<*/
	
	cout << "digite sua  idade\n";/*mudança do printf para o cout<<*/
	cin>> referencia;/*mudança do scanf para o cin<<*/
	
	cout << "joana, pedro<=" << referencia << endl;
	cout << "joana, pedro>=" << referencia << endl;
	
	
	if (referencia>=18){
	
	cout << "joana mais velha\n";
}

if (referencia<=18){
	
	cout << "pedro mais novo\n";
}
	
	if(idade>=referencia){
		cout << "você é mais velho\n";/*mudança do printf para o cout<<*/
		
	}
	else
	cout << "você é mais novo\n";/*mudança do printf para o cout<<*/
	
	system("pause");
	
	return 0;
	
	
	
	
	
	
	
	
}
	
