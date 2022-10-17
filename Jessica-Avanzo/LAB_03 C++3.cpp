#include<iostream>



using namespace std;/* é do padrão c++ não do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/


int main(int argc, char** argv){/* DECLARAÇÃO DE VARIAVEIS*/


int base, altura, area, perimetro;
char retanguloa, retangulob;


cout <<"FATEC São Caetano do Sul \n"; /*mudança do printf para o cout<<*/
	
	cout << "Disciplina: Estrutura de Dados\n"; /*mudança do printf para o cout<<*/
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudança do printf para o cout<<*/
	
	
	cout << "universidade de brasilia\n", 161;/*mudança do printf para o cout<<*/
	cout <<"disciplina: 113913 - icc \n";/*mudança do printf para o cout<<*/
	cout << "aluno (a): \n\n\n";/*mudança do printf para o cout<<*/
	
	/*CIN ENTRADA DE DADOS (LÊ UM CONJUNTO DE DADOS ONDE A INFORMAÇÃO ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIREÇAO A VARIÁVEL>>)*/
		/*COUT SAÍDA DE DADOS A INFORMAÇÃO ESTA SAINDA DA VARIAVEL INDO PARA A SAÍDA PADRÃO << */

	
	
	/*CIN ENTRADA DE DADOS (LÊ UM CONJUNTO DE DADOS ONDE A INFORMAÇÃO ESTA INDO PARA O DISPOSITIVO DE ENTRADA EM DIREÇAO A VARIÁVEL>>)*/
	/*COUT SAÍDA DE DADOS A INFORMAÇÃO ESTA SAINDO DA VARIAVEL INDO PARA A SAÍDA PADRÃO << */
	
	/*INÍCIO DA LÓGICA*/
	
	
	cout << "Fatec São Caetano do Sul\n";/*mudança do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudança do printf para o cout<<*/

	
	
	
	cout << "Digite a base do retangulo em cm:";/*mudança do printf para o cout<<*/
	cin >> base;/*mudança do scanf para o cin<<*/
	
	cout << "Digite a altura do retangulo em cm:";
	cin >> altura;/*mudança do scanf para o cin<<*/
	
	area=base*altura;
	perimetro= (base*2)+(altura*2);
	
	cout << "\n A area do quadrado e :" << area;/*mudança do printf para o cout<<*/
	cout << "\n O perimetro do quadrado e:" << perimetro;/*mudança do printf para o cout<<*/
	
	return 0;
	
	
	if(altura>base){
		cout << "a altura do retangulo a é maior que a base do retangulo b\n"
	    cout << "a altura do retangulo b é maior que a base do retangulo a =\n"altura;
		
		
	}
	 else if(altura<base){
	
		cout << "a altura do retangulo a é menor que a base do retangulo b\n"
		cout << "a altura do retangulo b é menor que a base do retangulo a =\n"base;

}

else if(altura==base){

cout"a altura e base dos retangulos são iguais e corespondem a:  %d\n", altura;

}

system("pause");/*getch substituido pelo system*/ 
	

return 0;

