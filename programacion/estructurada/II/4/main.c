#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int a, b, c, promedio, mayor;

    printf("Ingrese tres numeros: \n");
    scanf("%d %d %d", &a, &b, &c);

    promedio = (a + b + c) / 3;

    printf("El promedio es: %d\n", promedio);

    if (a > b && a > c) {
        mayor = a;
    } else if (b > c) {
        mayor = b;
    } else if (c > b) {
        mayor = c;
    } else {
        printf("No hay mayor");
        return 0;
    }

    printf("El mayor es: %d", mayor);
    return 0;
}
