/*Mariana Gutiérrez Acosta
clase 2 ejercicio13*/

#include <stdio.h>

void main()
{
    int mes;

    printf("Introduce un número entre 1 y 12: ");
    scanf("%d", &mes);

    if (mes == 1) 
    {
        printf("Enero\n");
    } 
    else 
      if (mes == 2) 
      {
        printf("Febrero\n");
      } 
      else 
        if (mes == 3) 
        {
          printf("Marzo\n");
        } 
        else 
          if (mes == 4) 
          {
            printf("Abril\n");
          } 
          else 
            if (mes == 5) 
            {
              printf("Mayo\n");
            } 
            else 
              if (mes == 6)
              {
                printf("Junio\n");
              } 
              else 
                if (mes == 7) 
                {
                  printf("Julio\n");
                } 
                else 
                  if (mes == 8) 
                  {
                    printf("Agosto\n");
                  } 
                  else 
                    if (mes == 9) 
                    {
                      printf("Septiembre\n");
                    } 
                    else 
                      if (mes == 10) 
                      {
                        printf("Octubre\n");
                      } 
                      else 
                        if (mes == 11) 
                        {
                          printf("Noviembre\n");
                        } 
                        else 
                          if (mes == 12) 
                          {
                            printf("Diciembre\n");
                          } 
                          else 
                          {
                            printf("Número inválido. Debe estar entre 1 y 12.\n");
                          }

  }
