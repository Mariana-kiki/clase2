/*Mariana Gutiérrez Acosta
clase 2 ejercicio2*/

#include <stdio.h>

void main ()
{
  int num1, num2;

  printf("Escribe el primer numero: \n");
  scanf("%d", &num1);
  printf("Escribe el segundo numero: \n");
  scanf("%d", &num2);

  if(num1 % num2 == 0)
    {
      printf("El numero es divisible \n");
  }
  else
{
      printf("El numero no es divisible \n");
}
}
