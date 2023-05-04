#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int a, b;

    printf("Ingrese numero a: ");
    scanf("%d", &a);

    printf("Ingrese numero b: ");
    scanf("%d", &b);

    if (a == b) {
        printf("Los numeros son iguales\n");
    }
    else {
        printf("Los numeros son distintos\n");
    }
    return 0;
}