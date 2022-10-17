#include <cstdlib>
#include <iostream>

using namespace std;/* é do padrão c++ não do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main(int argc, char** argv){/* DECLARAÇÃO DE VARIAVEIS*/

int band;
float kms, vlcorrida;


	/* 
	MUDANÇA DE COMANDOS DE ENTRADA E SAÍDA (PRINTF E SCANF PARA COUT E CIN) 
	/*CIN ENTRADA DE DADOS (LÊ UM CONJUNTO DE DADOS ONDE A INFORMAÇÃO ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIREÇAO A VARIÁVEL>>)*/
		/*COUT SAÍDA DE DADOS A INFORMAÇÃO ESTA SAINDA DA VARIAVEL INDO PARA A SAÍDA PADRÃO << */
		
		cout << "Fatec São Caetano do Sul\n";/*mudança do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudança do printf para o cout<<*/


cout << "digita um numero da bandeira (1 ou 2): ";/*mudança do printf para o cout<<*/
	cin >> %d, &band;/*mudança do scanf para o cin<<*/
	
	cout << "digita kilometragem rodada";/*mudança do printf para o cout<<*/
	cin >> %f, &kms;/*mudança do scanf para o cin<<*/
	
	if (band==1){
		
		vlcorrida = 2.3*kms;
		
	}
	
	else if(band ==2) {
		
		vlcorrida = 2.3*kms;
		
		
	}
	
	cout <<"o valor da corrida e: R$ %.2f\n", vl corrida;/*mudança do printf para o cout<<*/
	
	system("pause");/*getch substituido pelo system*/ 
	
	
	return 0;
	
	
}
