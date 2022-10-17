#include <cstdlib>
#include <iostream>

using namespace std; /* do padrao c++ nao do comando definido por outra biblioteca e sem ter que usar o std em todos os cout*/

int main(int argc, char** argv)
{
	/* DECLARACAO DE VARIAVEIS*/
	int num1, num2, num3;
		
	cout << "Fatec Sao Caetano do Sul\n";/*mudan�a do printf para o cout<<*/
	cout << "Disciplina: Estrutura de Dados \n";
	cout << "Alunas: Rita Aparecida Santos Fonseca\n, Jessica Avanzo e Jully Ferreira\n";/*mudan�a do printf para o cout<<*/

	cout << "-------------------------------------------------------" << endl;

    cout << "voce deveria digitar tres numeros inteiros:  %2f\n";/*mudan�a do printf para o cout<<*/
    cout << "digite o primeiro numero ";/*mudanca do printf para o cout<<*/
	cin >> num1;/*mudanca do scanf para o cin<<*/
	
	cout << "digite o segundo numero ";/*mudanca do printf para o cout<<*/
	cin >> num2;/*mudanca do scanf para o cin<<*/
	
	cout << "digite o terceiro numero ";/*mudanca do printf para o cout<<*/
	cin >> num3;/*mudanca do scanf para o cin<<*/
	
	/*desigualdade triagular: requisitos para que tres numeros formem um triangulo*/
	
	if(num1<(num2+num3)){
		
	}
	if(num2<(num1+num3)){
			
	}
	
	if(num2>(num1+num2))
	{	
		cout << "nos numeros que voce digitou  formam um triangulo ";/*mudanca do printf para o cout<<*/	
	}
	else
	{
		cout << "nos numeros que voce digitou nao formam um triangulo ";/*mudanca do printf para o cout<<*/
	}
	
	system("pause");/*getch substituido pelo system*/ 
	
	return 0;
}
