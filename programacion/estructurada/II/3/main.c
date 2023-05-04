#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int lado1, lado2, lado3;

    printf("Ingrese tres lados de un triangulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado2 == lado3) {

        printf("El triangulo es equilatero");
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {

        printf("El triangulo es isosceles");
    } else {

        printf("El triangulo es escaleno");
    }
    return 0;
}
