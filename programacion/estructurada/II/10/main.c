#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    float sueldo;
    int horas_trabajadas, categoria;

    printf("Ingrese las horas trabajadas y la categoria: \n");
    scanf("%d %d", &horas_trabajadas, &categoria);

    switch (categoria) {
    case 1:
        sueldo = horas_trabajadas * 50;
        break;
    case 2:
        sueldo = horas_trabajadas * 70;
        break;
    case 3:
        sueldo = horas_trabajadas * 80;
        break;
    default:
        return 0;
    }

    printf("El sueldo del empleado es: %.2f", sueldo);
    return 0;
}
