#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int a, b;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("El numero mayor es %d", a);
    } else if (a == b) {
        printf("Los numeros son iguales %d %d", a, b);
    } else {
        printf("El numero mayor es %d", b);
    }
    return 0;
}
