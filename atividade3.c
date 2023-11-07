#include <stdio.h>
#include <stdlib.h>

int main (){

float nota;

printf (" insira a nota do aluno:");
scanf ("%f",&nota);


if (nota >= 9 )
{
    printf ("Exelente");
}
if (nota >= 7 && nota == 8.9)
{
    printf ("bom");
}
if (nota == 5 || nota == 6)
{
    printf ("razoavel");
}
if (nota < 5)
{
printf ("insulficiente");
}



















return 0;
}