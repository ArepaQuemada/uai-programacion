#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int edad1, edad2;
    float altura1, altura2;

    printf("Ingrese dos edades: \n");
    scanf("%d %d", &edad1, &edad2);

    printf("Ingrese dos alturas: \n");
    scanf("%f %f", &altura1, &altura2);

    if (edad1 > edad2) {
        printf("La estatura del mayor de edad %d es %.2fm\n", edad1, altura1);
    } else {
        printf("La estatura del mayor de edad %d es %.2fm\n", edad2, altura2);
    }
    return 0;
}
