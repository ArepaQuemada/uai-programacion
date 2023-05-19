#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int num, positivos = 0, negativos = 0, ceros = 0, i;

    for (i = 0; i < 10; i++) {
        printf("Ingrese un numero %d: ", i + 1);
        scanf("%d", &num);
        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Ceros: %d\n", ceros);

    return 0;
}