#include <stdio.h>
#include <stdlib.h>

int main (){

char nome;
int idade;


printf ("insira seu nome:");
scanf("%s",&nome);

printf ("insira sua idade:");
scanf("%d",&idade);

if (idade >= 18 )
{
    printf ("acesso permitido");
}
else
{
    printf("acesso negado");
}













    return 0;
}