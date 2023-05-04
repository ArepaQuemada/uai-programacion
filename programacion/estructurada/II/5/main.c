#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int a, b, c, d, suma1, suma2, mayor;
    printf("Ingrese cuatro numeros: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    suma1 = a + b;
    suma2 = c + d;

    if (suma1 > suma2) {
        printf("La suma1 es mayor a la suma2 %d", suma1);
    } else {
        printf("La suma2 es mayor a la suma1 %d", suma2);
    }
    return 0;
}
