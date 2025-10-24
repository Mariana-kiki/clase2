/*Mariana Gutiérrez Acosta
clase 2 ejercicio11*/

#include <stdio.h>

void main() 
{
    char c;

    printf("Introduce un carácter: ");
    scanf(" %c", &c);
    
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("Es una vocal \n");
    else
        printf("No es una vocal \n");
}
