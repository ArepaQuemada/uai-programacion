#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, num3, sum1, sum2;
	
	printf("Ingrese el primer numero\n");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero\n");
	scanf("%d", &num2);
	printf("Ingrese el segundo numero\n");
	scanf("%d", &num3);

	sum1 = num1 + num2;
	sum2 = num3 + sum1;

	printf("El resultado es %d\n", sum2);		
	return 0;
}

