#include<iostream>


using namespace std;/* � do padr�o c++ n�o do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main(){
	
	int n1, n2;
	char par, impar;
	
	/* 
	MUDAN�A DE COMANDOS DE ENTRADA E SA�DA (PRINTF E SCANF PARA COUT E CIN) 
	/*CIN ENTRADA DE DADOS (L� UM CONJUNTO DE DADOS ONDE A INFORMA��O ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIRE�AO A VARI�VEL>>)*/
		/*COUT SA�DA DE DADOS A INFORMA��O ESTA SAINDA DA VARIAVEL INDO PARA A SA�DA PADR�O << */
		
	cout << "Fatec S�o Caetano do Sul\n";/*mudan�a do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudan�a do printf para o cout<<*/

    cout << "digite o primeiro numero\n"/*mudan�a do printf para o cout<<*/
    cin>> n1;/*mudan�a do scanf para o cin<<*/
    
    cout << "digite o segundo numero\n"/*mudan�a do printf para o cout<<*/
    cin>> n2;/*mudan�a do scanf para o cin<<*/
    
    
    
    if(n1>n2 & par>impar){
    	
      cout << "\n o maior numero e \n : "<< n1;/*mudan�a do printf para o cout<<*/
	 		
	}
    
  else(n2>n1 & impar>par){
  	cout << "\n o maior numero e \n : "<< n2;/*mudan�a do printf para o cout<<*/

  }
   system("pause");/*getch substituido pelo system*/ 
	
   
   return 0;
    
	
	
	
	
	
}
