#include <stdio.h>

int main(void) {

int jogo;
int confi;

  printf ("\n (1) NOVO JOGO\n");
printf ("\n (2)  CARREGAR JOGO\n");
  printf ("\n(3) configuração\n");
  scanf("%d",&jogo);

switch ( jogo ) {
case 1:
printf("CARREGANDO NOVO JOGO............");
break;
case 2:
printf("CARREGANDO JOGO SALVO");
break;
case 3:
printf("\nDIFICULDADE DO JOGO\n");
printf("\n(1) MUITO DIFÍCIL\n");
printf("\n(2)MEDIO\n");
printf("\n(3) FÁCIL\n");
scanf("%d",&confi);
break;
}


  return 0;
}