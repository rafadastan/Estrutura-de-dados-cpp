#include <cstdlib>
#include <iostream>

using namespace std;/* � do padr�o c++ n�o do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main(int argc, char** argv){/* DECLARA��O DE VARIAVEIS*/

int band;
float kms, vlcorrida;


	/* 
	MUDAN�A DE COMANDOS DE ENTRADA E SA�DA (PRINTF E SCANF PARA COUT E CIN) 
	/*CIN ENTRADA DE DADOS (L� UM CONJUNTO DE DADOS ONDE A INFORMA��O ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIRE�AO A VARI�VEL>>)*/
		/*COUT SA�DA DE DADOS A INFORMA��O ESTA SAINDA DA VARIAVEL INDO PARA A SA�DA PADR�O << */
		
		cout << "Fatec S�o Caetano do Sul\n";/*mudan�a do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudan�a do printf para o cout<<*/


cout << "digita um numero da bandeira (1 ou 2): ";/*mudan�a do printf para o cout<<*/
	cin >> %d, &band;/*mudan�a do scanf para o cin<<*/
	
	cout << "digita kilometragem rodada";/*mudan�a do printf para o cout<<*/
	cin >> %f, &kms;/*mudan�a do scanf para o cin<<*/
	
	if (band==1){
		
		vlcorrida = 2.3*kms;
		
	}
	
	else if(band ==2) {
		
		vlcorrida = 2.3*kms;
		
		
	}
	
	cout <<"o valor da corrida e: R$ %.2f\n", vl corrida;/*mudan�a do printf para o cout<<*/
	
	system("pause");/*getch substituido pelo system*/ 
	
	
	return 0;
	
	
}
