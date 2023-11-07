#include <stdio.h>
#include <stdlib.h>

int main (){




int loja;
char resultado;


printf("\n informe o codigo do item que deseja");
printf ("\n 1 - camiseta ");
printf ("\n 2 - calça ");
printf ("\n 3 - sapato\n");
scanf ("%d",&loja);


switch (loja)
{
case 1:
    printf ("O item custa:R$ 250 ");
    break;
    case 2:
    printf ("O item custa:R$ 100 ");
    break;
    case 3:
        printf ("O item custa:R$ 400 ");
    break;
default:
    break;
}







return 0;
}