#include <iostream>
#include "carro.h"

carro::carro(int a =0, float v = -1, float k = -1)
{
    ano = a;
    valor = v;
    k = km;
}

void carro::setano(int anoCarro)
{
    ano = anoCarro;
    //this->ano = ano;
}

int carro::getano()
{
    return ano;
}

void carro::setValor(float valor)
{
    this->valor = valor;
}

float carro::getValor()
{
    return valor;
}

void carro::setKm(float k)
{
    km = k;
}

float carro::getKm()
{
    return km;
} 