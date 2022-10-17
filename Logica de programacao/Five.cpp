#include <iostream>
#include <string>

using namespace std;

string media(float &n1, float &n2)
{
    float media = (n1+n2)/2;
    string message;

    if (media >= 5)
    {
        message = "Aluno aprovado, media foi: \n" + to_string(media);
    }else{
        message = "Aluno reprovado, media foi: \n" + to_string(media);
    }
    
    return message;
}

int main()
{
    float nota1, nota2;

    cout << "Informe nota 1: \n";
    cin >> nota1;

    cout << "Informe nota 2: \n";
    cin >> nota2;

    string resultado = media(nota1, nota2);

    cout << resultado << endl; 

    return 0;
}

