#include <stdio.h>
#include <stdlib.h>

/*4. Fa�a um programa que determine e mostre os cinco primeiros m�ltiplos de 3
considerando n�meros maiores que 0.*/

int main (){

int i,multiplo;

    multiplo=0;
    i=1;

while (i>0)
{
    if (i%3==0)
    {
        printf ("\nO numero %d e multiplo de 3.",i);

        multiplo++;
    }
    if (multiplo==5)
    {
        break;
    }
i++;
}
}
