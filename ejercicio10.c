/*Mariana Gutiérrez Acosta
clase 2 ejercicio10*/

#include <stdio.h>

void main() 
{
    int a, b, c;
    int mayor, medio, menor;

    printf("Introduce tres números separados por espacios: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) 
    {
        mayor = a;
        if (b >= c) 
        {
            medio = b;
            menor = c;
        } 
        else 
        {
            medio = c;
            menor = b;
        }
    } 
    else 
      if (b >= a && b >= c) 
    {
        mayor = b;
        if (a >= c) 
        {
            medio = a;
            menor = c;
        } 
        else 
        {
            medio = c;
            menor = a;
        }
    } 
      else 
      {
        mayor = c;
        if (a >= b) 
        {
            medio = a;
            menor = b;
        } 
        else 
        {
            medio = b;
            menor = a;
        }
       }

    printf("Orden de mayor a menor: %d, %d, %d\n", mayor, medio, menor);
}
