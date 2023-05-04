#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor_hora, tiempo_trabajado, sueldo;
	valor_hora = 10;

	printf("Ingrese el tiempo trabajado: \n");
	scanf("%d", &tiempo_trabajado);

	sueldo = valor_hora * tiempo_trabajado;
	printf("El sueldo es: %d\n", sueldo);
}
