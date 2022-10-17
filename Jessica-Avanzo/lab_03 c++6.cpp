#include <cstdlib>
#include <iostream>

using namespace std;/* é do padrão c++ não do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main(int argc, char** argv){/* DECLARAÇÃO DE VARIAVEIS*/

int iddjoana, iddpedro, iddismael;



	/* 
	MUDANÇA DE COMANDOS DE ENTRADA E SAÍDA (PRINTF E SCANF PARA COUT E CIN) 
	/*CIN ENTRADA DE DADOS (LÊ UM CONJUNTO DE DADOS ONDE A INFORMAÇÃO ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIREÇAO A VARIÁVEL>>)*/
		/*COUT SAÍDA DE DADOS A INFORMAÇÃO ESTA SAINDA DA VARIAVEL INDO PARA A SAÍDA PADRÃO << */
		
		cout << "Fatec São Caetano do Sul\n";/*mudança do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudança do printf para o cout<<*/


cout << "Digite a idade de joana em anos\n:";/*mudança do printf para o cout<<*/
	cin >> iddjoana;/*mudança do scanf para o cin<<*/
	
	cout << "Digite a idade de pedro em anos\n:";/*mudança do printf para o cout<<*/
	cin >> iddpedro;/*mudança do scanf para o cin<<*/
	
	cout << "Digite a idade de ismael em anos\n:";/*mudança do printf para o cout<<*/
	cin >> iddismael;/*mudança do scanf para o cin<<*/
	
	if(iddjoana>iddpedro && iddpedro>iddismael);{
	cout << "joana é a mais velha\n";
}
	else if(iddpedro>issismael);{
	cout <<"pedro é mais velho\n";
}
	
	else {
		
		cout << "ismael é o mais velho";
		
		
	}
	
	system("pause");/*getch substituido pelo system*/ 
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
