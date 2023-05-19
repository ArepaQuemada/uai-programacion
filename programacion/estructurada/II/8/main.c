#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "spanish");
    int dia, mes, anno;
    printf("Ingrese la fecha dia mes año: \n");
    scanf("%d %d %d", &dia, &mes, &anno);

    if (mes < 1 || mes > 12 || dia < 1 || dia > 31 || anno < 1) {
        printf("La fecha no es valida");
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) {
            printf("La fecha no es valida");
        }
    } else if (mes == 2) {
        if (dia > 28 && (anno % 400 != 0 && anno % 4 != 0)) {
            printf("La fecha no es valida");
        } else {
            printf("La fecha es valida");
        }
    } else {
        printf("La fecha es valida");
    }

    return 0;
}
