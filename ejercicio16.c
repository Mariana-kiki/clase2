

#include <stdio.h>

void main() 
{
    float x1, y1, x2, y2, pendiente;

    printf("Introduce coordenadas del primer punto (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Introduce coordenadas del segundo punto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    if (x2 != x1) 
    {
        pendiente = (y2 - y1) / (x2 - x1);
        printf("La pendiente de la recta es: %.2f\n", pendiente);
    } 
    else 
    {
        printf("Pendiente indefinida (división entre cero)\n");
    }
}
