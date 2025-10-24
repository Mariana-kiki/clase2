#include <stdio.h>

int main() 
{
    int a, b, c;

    printf("Introduce tres números de una cifra: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a == 1 && b == 2 && c == 3) || (a == 1 && c == 2 && b == 3) ||
        (b == 1 && a == 2 && c == 3) || (b == 1 && c == 2 && a == 3) ||
        (c == 1 && a == 2 && b == 3) || (c == 1 && b == 2 && a == 3))
        printf("Acceso permitido\n");
    else
        printf("Acceso denegado\n");
}
