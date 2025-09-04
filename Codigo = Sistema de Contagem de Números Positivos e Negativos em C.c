#include <stdio.h>

int main() {
    int n, positivos = 0, negativos = 0, i = 0;

    printf("Digite 10 numeros inteiros:\n");

    while (i < 10) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &n);

        if (n > 0) {
            positivos++;
        } else if (n < 0) {
            negativos++;
        }
        i++;
    }

    printf("\nResultado:\n");
    printf("Numeros positivos: %d\n", positivos);
    printf("Numeros negativos: %d\n", negativos);

    if (positivos > negativos) {
        printf("Houve mais numeros positivos.\n");
    } else if (negativos > positivos) {
        printf("Houve mais numeros negativos.\n");
    } else {
        printf("Houve um empate entre numeros positivos e negativos.\n");
    }

    return 0;
}
