#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int lado1, lado2, lado3, perimetro;
	
	printf("Ingrese el lado1 del triangulo: %d\n", lado1);
	scanf("%d", &lado1);
	printf("Ingrese el lado2 del triangulo: %d\n", lado2);
	scanf("%d", &lado2);
	printf("Ingrese el lado3 del triangulo: %d\n", lado3);
	scanf("%d", &lado3);

	perimetro = lado1 + lado2 + lado3;

	printf("El perimetro del triangulo es: %d\n", perimetro);

	return 0;
}

