#include <stdio.h>

int main() {
    int num;
    int i;
    int num1 = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Número não primo\n");
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                num1= 1;
                break;
            }
        }

        if (num1 == 0) {
            printf("Número primo\n");
        } else {
            printf("Número não primo\n");
        }
    }

    return 0;
}


