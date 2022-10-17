#include <cstdlib>
#include <iostream>

using namespace std;/* é do padrão c++ não do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main () {/* DECLARAÇÃO DE VARIAVEIS*/


	/* 
	MUDANÇA DE COMANDOS DE ENTRADA E SAÍDA (PRINTF E SCANF PARA COUT E CIN) 
	/*CIN ENTRADA DE DADOS (LÊ UM CONJUNTO DE DADOS ONDE A INFORMAÇÃO ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIREÇAO A VARIÁVEL>>)*/
		/*COUT SAÍDA DE DADOS A INFORMAÇÃO ESTA SAINDA DA VARIAVEL INDO PARA A SAÍDA PADRÃO << */

    cout << "Fatec São Caetano do Sul\n";/*mudança do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudança do printf para o cout<<*/

	 

int n1, n2, n3;

    
	
	/*Inicio da Lógica*/
	
	
	cout << "Digite  tres numeros inteiros diferentes\n";/*mudança do printf para o cout<<*/
	cout << "digite o primeiro numero\n";/*mudança do printf para o cout<<*/
	cin >> n1;/*mudança do scanf para o cin<<*/
	
	cout << "digite o segundo numero\n";/*mudança do printf para o cout<<*/
	cin >> n2;/*mudança do scanf para o cin<<*/
	
	cout << "digite o terceiro numero\n";/*mudança do printf para o cout<<*/
	cin >> n3;/*mudança do scanf para o cin<<*/
	
	
/*CONDIÇÃO E RESULTADOS*/


if(n1<n2 && n1<n3){
	if(n1<n3)
	
	cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n", n1, n2, n3;/*mudança do printf para o cout<<*/
	

else
	
cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n", n1, n2, n3;/*mudança do printf para o cout<<*/
	
		
}	
	
	else if (n2<n3){
		
		
	cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n\n", n2, n1, n3;/*mudança do printf para o cout<<*/
		
		

	if(n1<n3)
		
			cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n\n", n2, n1, n3;/*mudança do printf para o cout<<*/
		
		else
			cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n\n", n2, n3, n1;/*mudança do printf para o cout<<*/
		
	}
	
	
	
	
	if(n1<n2){

		
			cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n\n", n3, n1, n2;/*mudança do printf para o cout<<*/
		
		else
			cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n\n", n3, n2, n1;/*mudança do printf para o cout<<*/
		
	
	
	
}
	
	
	system("pause");
	
	return 0;
	
	
	
	
}

