#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
    } else {
        for (int i = numero; i >= 0; i--) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}


