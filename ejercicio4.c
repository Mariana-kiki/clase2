#include <stdio.h>

int main() 
{
    int num1, num2;

    printf("Introduce dos números enteros separados por un espacio: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) 
    {
        printf("El primer número (%d) es mayor que el segundo (%d)\n", num1, num2);
    } 
    else 
      if (num2 > num1) 
    {
        printf("El segundo número (%d) es mayor que el primero (%d)\n", num2, num1);
    } 
    else 
    {
        printf("Ambos números son iguales: %d\n", num1);
    }
}
