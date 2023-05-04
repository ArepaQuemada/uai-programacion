#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cantidad_vehiculos, valor_vehiculo, salario, plus, total_pagado, x_cada_vehiculo;
	
	salario = 500;
	plus = 10;
	x_cada_vehiculo = 50;

	printf("Ingrese la cantidad de vehiculos vendidos: \n");
	scanf("%d", &cantidad_vehiculos);

	printf("Ingrese el valor de cada vehiculo: \n");
	scanf("%d", &valor_vehiculo);

	total_pagado = (cantidad_vehiculos * x_cada_vehiculo)  + (valor_vehiculo * plus / 100) + salario;

	printf("El total a pagar es: %d", total_pagado);
}
