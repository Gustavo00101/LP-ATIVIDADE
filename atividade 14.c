#include <stdio.h>

int main() {
    int numero;
    int somapares = 0;
    int somaimpares = 0;
    int numpares = 0;
    int numimpares = 0;
    float mediaimpares;
    float mediapares;

    printf("Digite números inteiros (digite um valor negativo para encerrar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        if (numero % 2 == 0) {
            somapares += numero;
            numpares++;
        } else {
            somaimpares += numero;
            numimpares++;
        }
    }

    if (numpares > 0) {
        float media_pares = (float)somapares / numpares;
        printf("Números pares: %d (Média: %.2f)\n", numpares, mediapares);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    if (numimpares > 0) {
        float mediaimpares = (float)somaimpares / numimpares;
        printf("Números ímpares: %d (Média: %.2f)\n", numimpares, mediaimpares);
    } else {
        printf("Nenhum número ímpar foi digitado.\n");
    }

    return 0;
}
