/*Mariana Gutiérrez Acosta
clase 2 ejercicio9*/

#include <stdio.h>

void main() 
{
    int num, menor;

    printf("Introduce 5 números enteros separados con espacio:\n");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &num);
        if (i == 0 || num < menor)
            menor = num;
    }

    printf("El menor número es: %d\n", menor);
}

