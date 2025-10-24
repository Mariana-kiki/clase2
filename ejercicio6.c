/*Mariana Gutiérrez Acosta
clase 2 ejercicio6*/

#include <stdio.h>

void main() 
{
    float x, resultado;

    printf("Introduce el valor de x: ");
    scanf("%f", &x);

    if (x <= 0)
        resultado = x + 3;
    else
        resultado = x * x + 2 * x;

    printf("f(x) = %.0f\n", resultado); 
}
