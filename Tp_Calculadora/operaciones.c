#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

float suma(float primerOperando, float segundoOperando)
{
    float resultado;
    resultado = primerOperando + segundoOperando;
    return resultado;
}

float resta(float primerOperando, float segundoOperando)
{
    float resultado;
    resultado = primerOperando - segundoOperando;
    return resultado;
}


float multiplicacion(float primerOperando, float segundoOperando)
{
    float resultado;
    resultado = primerOperando * segundoOperando;
    return resultado;
}

float division(float primerOperando, float segundoOperando)
{
    float resultado;
    resultado = primerOperando / segundoOperando;
    return resultado;
}

float factorial(float operando)
{
    int i;
    double fact = 1;
    if(operando == 0)
    {
        return 1;
    }
    for (i = 1; i <= operando; i++)
    {
        fact *= i;
    }
    return fact;
}
