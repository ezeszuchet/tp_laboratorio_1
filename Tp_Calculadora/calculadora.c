#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

void menu()
{
    int opcion;
    float primerOperando = 0;
    float segundoOperando = 0;
    float fSuma, fResta, fMultiplicacion, fDivision, factorialUno, factorialDos;
    int code = -1;
    do
    {
        printf("\n 1. Ingresas 1er operando (A = %.2f)\n", primerOperando);
        printf("2. Ingresar 2do operando (B = %.2f)\n", segundoOperando);
        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. salir\n");
        printf("Elija una opcion: ");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            primerOperando = IngresoOperando();
            break;
        case 2:
            segundoOperando = IngresoOperando();
            break;
        case 3:
            code = ValidarOperandos(primerOperando, segundoOperando, code);
            if(code == -1)
            {
                fSuma = suma(primerOperando, segundoOperando);
                fResta = resta(primerOperando, segundoOperando);
                fMultiplicacion = multiplicacion(primerOperando, segundoOperando);
                fDivision = division(primerOperando, segundoOperando);
                factorialUno = factorial(primerOperando);
                factorialDos = factorial(segundoOperando);
                printf("Se ha calculado exitosamente todas las operaciones");
            }else
            {
                switch(code)
                {
                case 1:
                    printf("No se puede dividir un numero por 0");
                    break;
                case 2:
                    printf("No se puede hacer el factorial de un numero negativo");
                    break;
                case 3:
                    printf("No se puede hacer el factorial de un numero con decimales");
                    break;
                }
                break;
            }

            break;
        case 4:
            if(code == -1)
                MuestroResultados(primerOperando, segundoOperando, fSuma, fResta, fMultiplicacion, fDivision, factorialUno, factorialDos);
            else
                printf("Revisar el error al calcular las operaciones");
            break;
        case 5:
            break;
        default:
            printf("\nOpcion incorrecta");
        }
    }

    while(opcion!=5);
}

float IngresoOperando()
{
    float numero = 0;
    printf("Ingrese un numero: ");
    scanf("%f", &numero);
    return numero;
}

void MuestroResultados(float primerOperando, float segundoOperando, float suma, float resta, float multiplicacion, float division, float factorialUno, float factorialDos)
{
    printf("\nEl resultado de %.2f + %.2f es: %.2f", primerOperando, segundoOperando, suma);
    printf("\nEl resultado de %.2f - %.2f es: %.2f", primerOperando, segundoOperando, resta);
    printf("\nEl resultado de %.2f / %.2f es: %.2f", primerOperando, segundoOperando, division);
    printf("\nEl resultado de %.2f * %.2f es: %.2f", primerOperando, segundoOperando, multiplicacion);
    printf("\nEl factorial de %.2f es: %.2f", primerOperando, factorialUno);
    printf("\nEl factorial de %.2f es: %.2f", segundoOperando, factorialDos);
}

int ValidarOperandos(float primerOperando, float segundoOperando, int code)
{
    if((int)segundoOperando == 0)
    {
        code = 1;
        //error = "No se puede dividir un número por 0";
    }

    if((int)primerOperando < 0 || (int)segundoOperando < 0)
    {
        code = 2;
        //error = "No se puede hacer el factorial de un número negativo";
    }

    if( (int)primerOperando % 1 != 0 || (int)segundoOperando % 1 != 0)
    {
        code = 3;
        //error = "No se puede hacer el factorial de un número con decimales";
    }
    return code;
}
