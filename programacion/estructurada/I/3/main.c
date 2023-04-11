#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, num3, sum;
	
	printf("Ingrese el primer numero\n");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero\n");
	scanf("%d", &num2);
	printf("Ingrese el segundo numero\n");
	scanf("%d", &num3);

	sum = num1 + num2 + num3;

	printf("El resultado es %d\n", sum);		
	return 0;
}

