#include <iostream>

using namespace std;

int main()
{
    int susp, conf, mort, total;

    cout << "universidade de brasilia\n" << endl;
	cout <<"disciplina: 113913 - icc \n";
	cout << "aluno (a): \n\n\n";

    cout << "Casos suspeitos: " << endl;
    cin >> susp;

    cout << "Casos confirmados: " << endl;
    cin >> conf;

    cout << "Quantidade de Mortes: " << endl;
    cin >> mort;

    cout << "Informacoes sobre a dengue em Brasilia: " << endl;

    cout << "Casos suspeitos: " << susp << endl;
    cout << "Casos confirmados: " << conf << endl;
    cout << "Quantidade de Mortes: " << mort << endl;

    total = (susp+conf+mort);

    cout << "Total de dados: " << total << endl;

    return 0;
}