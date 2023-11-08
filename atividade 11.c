#include <stdio.h>
#include <string.h>

int main() {
    char codigoAcessoCorreto[]= "1234";
    char codigoAcessoUsuario[20];  

    while (1) {  
        printf("Digite o código de acesso: ");
        scanf("%s", codigoAcessoUsuario);

        if (strcmp(codigoAcessoUsuario, codigoAcessoCorreto) == 0) {
            printf("Acesso concedido!\n");
            break;  
        } else {
            printf("Código de acesso incorreto. Tente novamente.\n");
        }
    }

    return 0;
}
