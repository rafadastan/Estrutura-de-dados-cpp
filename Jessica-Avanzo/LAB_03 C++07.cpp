#include <cstdlib>
#include <iostream>

using namespace std;/* é do padrão c++ não do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main(int argc, char** argv){/* DECLARAÇÃO DE VARIAVEIS*/

int num;


	/* 
	MUDANÇA DE COMANDOS DE ENTRADA E SAÍDA (PRINTF E SCANF PARA COUT E CIN) 
	/*CIN ENTRADA DE DADOS (LÊ UM CONJUNTO DE DADOS ONDE A INFORMAÇÃO ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIREÇAO A VARIÁVEL>>)*/
		/*COUT SAÍDA DE DADOS A INFORMAÇÃO ESTA SAINDA DA VARIAVEL INDO PARA A SAÍDA PADRÃO << */
		
		cout << "Fatec São Caetano do Sul\n";/*mudança do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudança do printf para o cout<<*/


while(true){

cout << "digita um numero maior ou igual a 50";/*mudança do printf para o cout<<*/
	cin >> num;/*mudança do scanf para o cin<<*/
}
	if(num%1 == 0){
		
		cout << num << "e par" << endl;/*mudança do printf para o cout<<*/
		
	}

else {
	cout  << num <<"e impar" << endl;/*mudança do printf para o cout<<*/
	
	
}

else {
	
	cout << "digita um numero maior ou igual a 50" << endl;/*mudança do printf para o cout<<*/
	cout << endl;
	
}
cout << "se quiser sair digite s:";
cout << sair;
cout << endl;
cout << endl;

if(sair == 's'|| sair == 's'){
	
	
	
}

system ("pause");/*getch substituido pelo system*/ 
	

return 0;














}

