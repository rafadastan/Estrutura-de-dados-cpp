#include <iostream>
#include "hash.h"

using namespace std;

int main()
{
    int tam_vetor, max;

    cout << "Programa gerador de HASH. \n";
    cout << "Digite o tamanho da HASH:  \n";

    cin >> tam_vetor;
    
    cout << "Digite o o numero maximo de elemento: \n";
    
    cin >> max;

    cout << "O fator de carga e: " << (float)max / (float)tam_vetor << endl;

    Hash alunoHash(tam_vetor, max);

    int opcao;
    int ra;
    string nome;
    bool busca;

    do
    {
        cout << "Digite 0 para parar o sistema. \n";
        cout << "Digite 1 para inserir um elemento. \n";
        cout << "Digite 2 para remover um elemento. \n";
        cout << "Digite 3 para buscar um elemento. \n";
        cout << "Digite 4 para imprimir uma hash. \n";

        if (opcao == 1)
        {
            cout << "Qual o RA do aluno? \n";
            cin >> ra;
            cout << "Qual nome do aluno? \n";
            cin >> nome;

            Aluno aluno(ra, nome);
            alunoHash.inserir(aluno);

        }else if (opcao == 2)
        {
            cout << "Qual o RA do aluno para ser removido? \n";
            cin >> ra;
            Aluno aluno(ra, " ");
            alunoHash.deletar(aluno);

        }else if (opcao == 3)
        {
            cout << "Qual o RA do aluno que deseja byscar? \n";
            cin >> ra;
            Aluno aluno(ra, " ");
            alunoHash.buscar(aluno, busca);

            if (busca)
            {
                cout << "Aluno encontrado: \n";
                cout << "RA: " << aluno.obterRa();
                cout << "NOME: " << aluno.obterNome();
            }else{
                cout << "Aluno nao encontrado: \n";
            }
        }else if (opcao == 4)
        {
            alunoHash.imprimir();
        }
        
        cin >> opcao;
    } while (opcao != 0);
    
    return 0;
}