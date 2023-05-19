#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    char patente[8];
    float multa, total_cobrado = 0, porcentaje_40, monto_40;
    int supera_40 = 0, ciclo = 5, i;

    for (i = 0; i < ciclo; i++) {
        printf("Ingrese la patente del vehiculo: \n");
        scanf("%s", patente);
        printf("Ingrese el monto de la multa: \n");
        scanf("%f", &multa);

        if (multa > 40) {
            supera_40++;
            monto_40 += multa;
        }

        total_cobrado += multa;
    }
    porcentaje_40 = (float)monto_40 / total_cobrado * 100;

    printf("Total cobrado: %.2f\n", total_cobrado);
    printf("Cantidad de multas que superan los $40: %d\n", supera_40);
    printf("Porcentaje de multas que superan los $40: %.2f\n", porcentaje_40);
    return 0;
}