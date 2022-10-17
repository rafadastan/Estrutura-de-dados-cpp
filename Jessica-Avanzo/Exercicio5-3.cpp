#include <iostream>

using namespace std;

int main()
{
    int altura, base, area1, area2;

    cout <<"FATEC Sao Caetano do Sul \n" << endl;
	
	cout << "Disciplina: Estrutura de Dados\n" << endl; 
	cout << "Alunas: Rita Aparecida Santos Fonseca\n e Jessica Avanzo e Jully Ferreira\n";
	
	cout << "universidade de brasilia\n" << endl;
	cout <<"disciplina: 113913 - icc \n";
	cout << "aluno (a): \n\n\n";

    cout << "Digite a altura do retangulo 1: " << endl;
    cin >> altura;

    cout << "Digite a base do retangulo 1: " << endl;
    cin >> base;

    area1 = altura*base;

    cout << "Digite a altura do retangulo 2: " << endl;
    cin >> altura;

    cout << "Digite a base do retangulo 2: " << endl;
    cin >> base;

    area2 = altura*base;

    if(area1 > area2)
    {
        cout << "A Area do retangulo 1 e maior do que o retangulo 2 \n";
        cout << "Area retangulo 1 = " << area1 << endl;
        cout << "Area retangulo 2 = " << area2 << endl;
    }else if (area2 > area1)
    {
        cout << "A Area do retangulo 2 e maior do que o retangulo 1 \n";
        cout << "Area retangulo 2 = " << area2;
        cout << "Area retangulo 1 = " << area1;
    }else if (area1 == area2)
    {
        cout << "Area dos retangulos sao iguais e corresponde a? " << area1 << endl;
    }
    
    return 0;
}