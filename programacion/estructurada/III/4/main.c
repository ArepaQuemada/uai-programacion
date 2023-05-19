#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int cant_1_al_10 = 0, cant_10_al_20 = 0, cant_20_al_30 = 0, cant_mayor_30 = 0;
    int ciclo = 30;
    int i;
    int valor;
    float prom1, prom2, prom3, prom4;

    for (i = 0; i < ciclo; i++) {
        printf("Ingrese un valor: \n");
        scanf("%d", &valor);

        if (valor >= 1 && valor <= 10) {
            cant_1_al_10++;
        } else if (valor >= 10 && valor <= 20) {
            cant_10_al_20++;
        } else if (valor >= 20 && valor <= 30) {
            cant_20_al_30++;
        } else {
            cant_mayor_30++;
        }
    }

    prom1 = (float)cant_1_al_10 / ciclo * 100;
    prom2 = (float)cant_10_al_20 / ciclo * 100;
    prom3 = (float)cant_20_al_30 / ciclo * 100;
    prom4 = (float)cant_mayor_30 / ciclo * 100;

    printf("Promedio de valores entre 1 y 10: %.2f\n", prom1);
    printf("Promedio de valores entre 10 y 20: %.2f\n", prom2);
    printf("Promedio de valores entre 20 y 30: %.2f\n", prom3);
    printf("Promedio de valores mayores a 30: %.2f\n", prom4);
    return 0;
}