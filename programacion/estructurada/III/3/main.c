#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int num, sum = 0, sum_par = 0, sum_impar = 0, i, cantidad = 8, cant_pares = 0, cant_impares = 0, cant_mayores = 0, mayor = 15;
    float prom, prom_par, prom_impar;

    for (i = 0; i < cantidad; i++) {
        printf("Ingrese un numero %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
        if (num % 2 == 0) {
            sum_par += num;
            cant_pares++;
        } else {
            sum_impar += num;
            cant_impares++;
        }
        if (num > mayor) {
            cant_mayores++;
        }
    }

    prom = sum / cantidad;
    prom_par = sum_par / cant_pares;
    prom_impar = sum_impar / cant_impares;

    printf("El promedio total es de %.1f\n", prom);
    printf("El promedio de pares es de %.1f\n", prom_par);
    printf("El promedio de impares es de %.1f\n", prom_impar);
    printf("La cantidad de numeros mayores a %d es de %d\n", mayor, cant_mayores);

    return 0;
}