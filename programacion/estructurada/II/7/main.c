#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int horas_trabajadas;
    float valor_hora, premio1, premio2, sueldo;

    premio1 = 50;
    premio2 = 100;

    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &horas_trabajadas);

    printf("Ingrese el valor de la hora: ");
    scanf("%f", &valor_hora);

    sueldo = horas_trabajadas * valor_hora;

    if (horas_trabajadas > 50) {
        sueldo = sueldo + premio1;
    }

    if (horas_trabajadas > 150) {
        sueldo = sueldo + premio2;
    }

    printf("El sueldo es: %.2f$ pesos", sueldo);
    return 0;
}
