/*Mariana Gutiérrez Acosta
clase 2 ejercicio15*/

#include <stdio.h>

void main() 
{
    int anio;

    printf("Introduce un año: ");
    scanf("%d", &anio);

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) 
    {
        printf("El año %d es bisiesto.\n", anio);
    } 
    else 
    {
        printf("El año %d no es bisiesto.\n", anio);
    }
}
