#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int lado1, lado2, perimetro, hipotenusa, superficie;
	
	printf("Ingrese el lado1 del triangulo: %d\n", lado1);
	scanf("%d", &lado1);
	printf("Ingrese el lado2 del triangulo: %d\n", lado2);
	scanf("%d", &lado2);

	hipotenusa = sqrt(pow(lado1,2) + pow(lado2,2));
	perimetro = lado1 + lado2 + hipotenusa;
	superficie = (lado1 * lado2) / 2;

	printf("La hipotenusa del triangulo es: %d\n", hipotenusa);
	printf("El perimetro del triangulo es: %d\n", perimetro);
	printf("La superficie del triangulo es: %d\n", superficie);

	return 0;
}

