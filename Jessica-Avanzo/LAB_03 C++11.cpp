#include <cstdlib>
#include <iostream>

using namespace std;/* � do padr�o c++ n�o do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main () {/* DECLARA��O DE VARIAVEIS*/


	/* 
	MUDAN�A DE COMANDOS DE ENTRADA E SA�DA (PRINTF E SCANF PARA COUT E CIN) 
	/*CIN ENTRADA DE DADOS (L� UM CONJUNTO DE DADOS ONDE A INFORMA��O ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIRE�AO A VARI�VEL>>)*/
		/*COUT SA�DA DE DADOS A INFORMA��O ESTA SAINDA DA VARIAVEL INDO PARA A SA�DA PADR�O << */

    cout << "Fatec S�o Caetano do Sul\n";/*mudan�a do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudan�a do printf para o cout<<*/

	 

int n1, n2, n3;

    
	
	/*Inicio da L�gica*/
	
	
	cout << "Digite  tres numeros inteiros diferentes\n";/*mudan�a do printf para o cout<<*/
	cout << "digite o primeiro numero\n";/*mudan�a do printf para o cout<<*/
	cin >> n1;/*mudan�a do scanf para o cin<<*/
	
	cout << "digite o segundo numero\n";/*mudan�a do printf para o cout<<*/
	cin >> n2;/*mudan�a do scanf para o cin<<*/
	
	cout << "digite o terceiro numero\n";/*mudan�a do printf para o cout<<*/
	cin >> n3;/*mudan�a do scanf para o cin<<*/
	
	
/*CONDI��O E RESULTADOS*/


if(n1<n2 && n1<n3){
	if(n1<n3)
	
	cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n", n1, n2, n3;/*mudan�a do printf para o cout<<*/
	

else
	
cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n", n1, n2, n3;/*mudan�a do printf para o cout<<*/
	
		
}	
	
	else if (n2<n3){
		
		
	cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n\n", n2, n1, n3;/*mudan�a do printf para o cout<<*/
		
		

	if(n1<n3)
		
			cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n\n", n2, n1, n3;/*mudan�a do printf para o cout<<*/
		
		else
			cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n\n", n2, n3, n1;/*mudan�a do printf para o cout<<*/
		
	}
	
	
	
	
	if(n1<n2){

		
			cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n\n", n3, n1, n2;/*mudan�a do printf para o cout<<*/
		
		else
			cout <<"\nNa ordem crescente os numeros sao: %d, %d, %d\n\n\n", n3, n2, n1;/*mudan�a do printf para o cout<<*/
		
	
	
	
}
	
	
	system("pause");
	
	return 0;
	
	
	
	
}

