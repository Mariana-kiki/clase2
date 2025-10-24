/*Mariana Gutiérrez Acosta
clase 2 ejercicio8*/

#include <stdio.h>

void main() 
{
    int num, suma, pares = 0;

    printf("Introduce un número de dos cifras: ");
    scanf("%d", &num);

    if (num > 9 && num < 100) 
    {
        int d1 = num / 10;
        int d2 = num % 10;
        suma = d1 + d2;

        if (d1 % 2 == 0) pares++;
        if (d2 % 2 == 0) pares++;

        printf("Suma de dígitos: %d\n", suma);
        printf("Cantidad de dígitos pares: %d\n", pares);
    } 
    else 
    {
        printf("El número no tiene dos cifras.\n");
    }
}
