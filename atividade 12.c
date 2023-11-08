#include <stdio.h>

int main() {
    int notas1;
    float nota;
    float soma = 0.0;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &notas1);

    for (int i = 1; i <= notas1; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    float media = soma / notas1;
    printf("A média das notas é: %.2f\n", media);

    return 0;
}
