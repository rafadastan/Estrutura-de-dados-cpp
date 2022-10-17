#include <cstdlib>
#include <iostream>

using namespace std;/* é do padrão c++ não do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main(int argc, char** argv){/* DECLARAÇÃO DE VARIAVEIS*/


float total, totalmorango, totalmaçã, pesototal;
char morango, maçã;


	/* 
	MUDANÇA DE COMANDOS DE ENTRADA E SAÍDA (PRINTF E SCANF PARA COUT E CIN) 
	/*CIN ENTRADA DE DADOS (LÊ UM CONJUNTO DE DADOS ONDE A INFORMAÇÃO ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIREÇAO A VARIÁVEL>>)*/
		/*COUT SAÍDA DE DADOS A INFORMAÇÃO ESTA SAINDA DA VARIAVEL INDO PARA A SAÍDA PADRÃO << */
		
		cout << "Fatec São Caetano do Sul\n";/*mudança do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudança do printf para o cout<<*/


cout << "Digite quantidade de morango:";/*mudança do printf para o cout<<*/
	cin >> morango;/*mudança do scanf para o cin<<*/
	
	cout << "Digite quantidade de maçã:";/*mudança do printf para o cout<<*/
	cin >> maçã;/*mudança do scanf para o cin<<*/
	
	
	pesototal=morango + maçã;
	
	if(pesototal<5){
		
	cout << totalmorango=7.0*morango;/*mudança do printf para o cout<<*/
	cout << totalmaçã=5.0*maçã;/*mudança do printf para o cout<<*/
		
	}
	 else {
	 	
	 	
	 	 totalmorango = 5.0*morango;
	 	 totalmaçã = 2.0*maçã;
	 }
	 
	 else {
	
	 totalmorango + totalmaçã;
	 
	 }
	  if(total>20){
	  
	  	total = 0.90 *total;
	  	cout << "o valor total da compra é: R$%.2f", total;	/*mudança do printf para o cout<<*/
	  	
	  }
	  
	  else {
	  	
	  	cout"o valor total da compra é: R$%.2f", total;/*mudança do printf para o cout<<*/
	  	
	  }
	 
	 system("pause");/*getch substituido pelo system*/ 
	
	 
	 return 0;
	 
}
	 
	 
	
