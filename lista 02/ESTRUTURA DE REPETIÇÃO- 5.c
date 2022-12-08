#include <stdio.h>
#include <stdlib.h>


/*5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/


int main() {

int num, i, soma=0;

for (i=1; i<=100; i++) {

if (i % 2 == 0)

soma += i;

}

printf("Soma dos 50 primeiros numeros e: %d", soma);

return 0;

}
