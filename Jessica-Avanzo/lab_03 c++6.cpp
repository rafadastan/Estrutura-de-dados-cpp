#include <cstdlib>
#include <iostream>

using namespace std;/* � do padr�o c++ n�o do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main(int argc, char** argv){/* DECLARA��O DE VARIAVEIS*/

int iddjoana, iddpedro, iddismael;



	/* 
	MUDAN�A DE COMANDOS DE ENTRADA E SA�DA (PRINTF E SCANF PARA COUT E CIN) 
	/*CIN ENTRADA DE DADOS (L� UM CONJUNTO DE DADOS ONDE A INFORMA��O ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIRE�AO A VARI�VEL>>)*/
		/*COUT SA�DA DE DADOS A INFORMA��O ESTA SAINDA DA VARIAVEL INDO PARA A SA�DA PADR�O << */
		
		cout << "Fatec S�o Caetano do Sul\n";/*mudan�a do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudan�a do printf para o cout<<*/


cout << "Digite a idade de joana em anos\n:";/*mudan�a do printf para o cout<<*/
	cin >> iddjoana;/*mudan�a do scanf para o cin<<*/
	
	cout << "Digite a idade de pedro em anos\n:";/*mudan�a do printf para o cout<<*/
	cin >> iddpedro;/*mudan�a do scanf para o cin<<*/
	
	cout << "Digite a idade de ismael em anos\n:";/*mudan�a do printf para o cout<<*/
	cin >> iddismael;/*mudan�a do scanf para o cin<<*/
	
	if(iddjoana>iddpedro && iddpedro>iddismael);{
	cout << "joana � a mais velha\n";
}
	else if(iddpedro>issismael);{
	cout <<"pedro � mais velho\n";
}
	
	else {
		
		cout << "ismael � o mais velho";
		
		
	}
	
	system("pause");/*getch substituido pelo system*/ 
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
