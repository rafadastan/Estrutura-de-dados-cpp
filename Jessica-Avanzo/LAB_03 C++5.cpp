#include <cstdlib>
#include <iostream>

using namespace std;/* � do padr�o c++ n�o do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main(int argc, char** argv){/* DECLARA��O DE VARIAVEIS*/


float total, totalmorango, totalma��, pesototal;
char morango, ma��;


	/* 
	MUDAN�A DE COMANDOS DE ENTRADA E SA�DA (PRINTF E SCANF PARA COUT E CIN) 
	/*CIN ENTRADA DE DADOS (L� UM CONJUNTO DE DADOS ONDE A INFORMA��O ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIRE�AO A VARI�VEL>>)*/
		/*COUT SA�DA DE DADOS A INFORMA��O ESTA SAINDA DA VARIAVEL INDO PARA A SA�DA PADR�O << */
		
		cout << "Fatec S�o Caetano do Sul\n";/*mudan�a do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudan�a do printf para o cout<<*/


cout << "Digite quantidade de morango:";/*mudan�a do printf para o cout<<*/
	cin >> morango;/*mudan�a do scanf para o cin<<*/
	
	cout << "Digite quantidade de ma��:";/*mudan�a do printf para o cout<<*/
	cin >> ma��;/*mudan�a do scanf para o cin<<*/
	
	
	pesototal=morango + ma��;
	
	if(pesototal<5){
		
	cout << totalmorango=7.0*morango;/*mudan�a do printf para o cout<<*/
	cout << totalma��=5.0*ma��;/*mudan�a do printf para o cout<<*/
		
	}
	 else {
	 	
	 	
	 	 totalmorango = 5.0*morango;
	 	 totalma�� = 2.0*ma��;
	 }
	 
	 else {
	
	 totalmorango + totalma��;
	 
	 }
	  if(total>20){
	  
	  	total = 0.90 *total;
	  	cout << "o valor total da compra �: R$%.2f", total;	/*mudan�a do printf para o cout<<*/
	  	
	  }
	  
	  else {
	  	
	  	cout"o valor total da compra �: R$%.2f", total;/*mudan�a do printf para o cout<<*/
	  	
	  }
	 
	 system("pause");/*getch substituido pelo system*/ 
	
	 
	 return 0;
	 
}
	 
	 
	
