#include <iostream>
#include <stdlib.h>

using namespace std;/* � do padr�o c++ n�o do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main(int argc, char** argv){/* DECLARA��O DE VARIAVEIS*/



	
	int idade, referencia=18;
	char nome, joana, pedro;
	
	cout <<"FATEC S�o Caetano do Sul \n"; /*mudan�a do printf para o cout<<*/
	
	cout << "Disciplina: Estrutura de Dados\n"; /*mudan�a do printf para o cout<<*/
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudan�a do printf para o cout<<*/
	
	
	cout << "universidade de brasilia\n", 161;/*mudan�a do printf para o cout<<*/
	cout <<"disciplina: 113913 - icc \n";/*mudan�a do printf para o cout<<*/
	cout << "aluno (a): \n\n\n";/*mudan�a do printf para o cout<<*/
	
	/*CIN ENTRADA DE DADOS (L� UM CONJUNTO DE DADOS ONDE A INFORMA��O ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIRE�AO A VARI�VEL>>)*/
		/*COUT SA�DA DE DADOS A INFORMA��O ESTA SAINDA DA VARIAVEL INDO PARA A SA�DA PADR�O << */

	
	
	/*CIN ENTRADA DE DADOS (L� UM CONJUNTO DE DADOS ONDE A INFORMA��O ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIRE�AO A VARI�VEL>>)*/
	/*COUT SA�DA DE DADOS A INFORMA��O ESTA SAINDO DA VARIAVEL INDO PARA A SA�DA PADR�O << */
	
	/*IN�CIO DA L�GICA*/
	
	
	cout << "digite seu nome\n";/*mudan�a do printf para o cout<<*/
	cin >> nome;/*mudan�a do scanf para o cin<<*/
	
	cout << "digite sua  idade\n";/*mudan�a do printf para o cout<<*/
	cin>> referencia;/*mudan�a do scanf para o cin<<*/
	
	cout << "joana, pedro<=" << referencia << endl;
	cout << "joana, pedro>=" << referencia << endl;
	
	
	if (referencia>=18){
	
	cout << "joana mais velha\n";
}

if (referencia<=18){
	
	cout << "pedro mais novo\n";
}
	
	if(idade>=referencia){
		cout << "voc� � mais velho\n";/*mudan�a do printf para o cout<<*/
		
	}
	else
	cout << "voc� � mais novo\n";/*mudan�a do printf para o cout<<*/
	
	system("pause");
	
	return 0;
	
	
	
	
	
	
	
	
}
	
