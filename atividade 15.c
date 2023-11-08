#include <stdio.h>

int main() {
    int opcao;
    int valor;

    while (1) {
        printf("Escolha a opção de conversão:\n");
        printf("1. Quilômetros para Milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("0. Sair do programa\n");

        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Programa encerrado. Adeus!\n");
            break;
        }

        switch (opcao) {
            case 1:
                printf("Digite a distância em quilômetros: ");
                scanf("%lf", &valor);
                printf("%.2lf quilômetros é igual a %.2lf milhas.\n", valor, valor * 0.621371);
                break;
            case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%lf", &valor);
                printf("%.2lf graus Celsius é igual a %.2lf graus Fahrenheit.\n", valor, (valor * 9/5) + 32);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
