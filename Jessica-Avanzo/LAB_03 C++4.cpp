#include<iostream>


using namespace std;/* é do padrão c++ não do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main(){
	
	int n1, n2;
	char par, impar;
	
	/* 
	MUDANÇA DE COMANDOS DE ENTRADA E SAÍDA (PRINTF E SCANF PARA COUT E CIN) 
	/*CIN ENTRADA DE DADOS (LÊ UM CONJUNTO DE DADOS ONDE A INFORMAÇÃO ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIREÇAO A VARIÁVEL>>)*/
		/*COUT SAÍDA DE DADOS A INFORMAÇÃO ESTA SAINDA DA VARIAVEL INDO PARA A SAÍDA PADRÃO << */
		
	cout << "Fatec São Caetano do Sul\n";/*mudança do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudança do printf para o cout<<*/

    cout << "digite o primeiro numero\n"/*mudança do printf para o cout<<*/
    cin>> n1;/*mudança do scanf para o cin<<*/
    
    cout << "digite o segundo numero\n"/*mudança do printf para o cout<<*/
    cin>> n2;/*mudança do scanf para o cin<<*/
    
    
    
    if(n1>n2 & par>impar){
    	
      cout << "\n o maior numero e \n : "<< n1;/*mudança do printf para o cout<<*/
	 		
	}
    
  else(n2>n1 & impar>par){
  	cout << "\n o maior numero e \n : "<< n2;/*mudança do printf para o cout<<*/

  }
   system("pause");/*getch substituido pelo system*/ 
	
   
   return 0;
    
	
	
	
	
	
}
