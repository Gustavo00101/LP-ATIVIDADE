#include <stdio.h>
#include <stdlib.h>

int main (){




int idioma;
char resultado;


printf("\n escolha um numero para o idioma que voce quer");
printf ("\n 1 - ingles");
printf ("\n 2 - espanhol");
printf ("\n 3 - frances");
printf("\n================================================\n");
scanf ("%d",&idioma);


switch (idioma)
{
case 1:
    printf ("welcome");
    break;
    case 2:
    printf ("bienvenida");
    break;
    case 3:
    printf ("accueillir");
    break;
default:
    break;
}







return 0;
}