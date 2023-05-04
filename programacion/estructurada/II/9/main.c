#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    float sueldo;
    int categoria, antiguedad;

    printf("Ingrese la categoria del empleado y antiguedad: ");
    scanf("%d %d", &categoria, &antiguedad);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &sueldo);

    if (categoria == 1) {
        sueldo = sueldo + (antiguedad * 50);
    }

    if (antiguedad > 5) {
        printf("El sueldo del empleado es: %.2f", sueldo);
    } else {
        printf("Se calculo el sueldo, pero no es mayor de 5 años de antiguedad");
    }

    return 0;
}
