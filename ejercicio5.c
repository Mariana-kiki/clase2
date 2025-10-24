#include <stdio.h>

int main() 
{
    const float Precio = 7.0; 
    int edad;
    float precioFinal;

    printf("Introduce tu edad: \n");
    scanf("%d", &edad);

    if (edad < 5) 
    {
        precioFinal = Precio * 0.4;
    } 
    else 
      if (edad > 60) 
      {
        precioFinal = Precio * 0.45;
      } 
      else 
      {
        precioFinal = Precio;
      }

    printf("El precio de la entrada es: %.2f Euros\n", precioFinal);
}
