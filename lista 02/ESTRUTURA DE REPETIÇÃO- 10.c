#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Fa�a um programa que leia 10 inteiros positivos, ignorando n�o positivos, e imprima sua m�dia.*/

    int a, e;

    for(int i = 0; i<10; i++){
        scanf("%d", & a);
        e = e + a;
    }

    system("cls");
    printf("Media: %d", (e/10));

    return 0;
}
