#include<iostream>



using namespace std;/* � do padr�o c++ n�o do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/


int main(int argc, char** argv){/* DECLARA��O DE VARIAVEIS*/


int base, altura, area, perimetro;
char retanguloa, retangulob;


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
	
	
	cout << "Fatec S�o Caetano do Sul\n";/*mudan�a do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudan�a do printf para o cout<<*/

	
	
	
	cout << "Digite a base do retangulo em cm:";/*mudan�a do printf para o cout<<*/
	cin >> base;/*mudan�a do scanf para o cin<<*/
	
	cout << "Digite a altura do retangulo em cm:";
	cin >> altura;/*mudan�a do scanf para o cin<<*/
	
	area=base*altura;
	perimetro= (base*2)+(altura*2);
	
	cout << "\n A area do quadrado e :" << area;/*mudan�a do printf para o cout<<*/
	cout << "\n O perimetro do quadrado e:" << perimetro;/*mudan�a do printf para o cout<<*/
	
	return 0;
	
	
	if(altura>base){
		cout << "a altura do retangulo a � maior que a base do retangulo b\n"
	    cout << "a altura do retangulo b � maior que a base do retangulo a =\n"altura;
		
		
	}
	 else if(altura<base){
	
		cout << "a altura do retangulo a � menor que a base do retangulo b\n"
		cout << "a altura do retangulo b � menor que a base do retangulo a =\n"base;

}

else if(altura==base){

cout"a altura e base dos retangulos s�o iguais e corespondem a:  %d\n", altura;

}

system("pause");/*getch substituido pelo system*/ 
	

return 0;

