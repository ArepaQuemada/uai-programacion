#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int num, sum = 0, i, cantidad = 25;
    float promedio;

    for (i = 0; i < cantidad; i++) {
        printf("Ingrese un numero %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
    }
    promedio = sum / cantidad;
    printf("La suma es: %d\n", sum);
    printf("El promedio es: %.2f", promedio);
    return 0;
}