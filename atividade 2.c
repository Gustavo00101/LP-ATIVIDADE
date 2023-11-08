#include <stdio.h>

int main() {
    float valorCompra;
    char diaSemana;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    printf("Digite o dia da semana (D para dia de semana, S para fim de semana): ");
    scanf(" %c", &diaSemana);

    float desconto = 0.0;

    if (valorCompra > 100.00) {
        if (diaSemana == 'D' || diaSemana == 'd') {
            desconto = valorCompra * 0.10;
        } else if (diaSemana == 'S' || diaSemana == 's') {
            desconto = valorCompra * 0.15;
        }
    }

    float valorTotal = valorCompra - desconto;

    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Valor total a pagar: R$ %.2f\n", valorTotal);

    return 0;
}

