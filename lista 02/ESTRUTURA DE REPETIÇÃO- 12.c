#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Fa�a um programa que receba um n�mero inteiro maior do que 1 e verifique se o
    n�mero fornecido � primo ou n�o.*/

    int num, iy = 0;

    scanf("%d", & num);

    for(int i = num-1; i>1; i--){
        if(num % i == 0){
            iy = 1;
        }

    }

    if(iy == 0){
        printf("E primo");
    }
    else{
        printf("Nao e primo");
    }

    return 0;
}


