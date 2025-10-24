#include <stdio.h>

void main() 
{
    float horas, precio, salario;

    printf("Introduce horas trabajadas y precio por hora: ");
    scanf("%f %f", &horas, &precio);

    if (horas <= 40)
    {
        salario = horas * precio;
    }
    else
    {
      if (horas <= 50)
      {
        salario = 40 * precio + (horas - 40) * precio * 1.5;
      }
      else
      {
        salario = 40 * precio + 10 * precio * 1.5 + (horas - 50) * precio * 2;
      }
    }

    printf("Salario semanal: %.2f\n", salario);
}
