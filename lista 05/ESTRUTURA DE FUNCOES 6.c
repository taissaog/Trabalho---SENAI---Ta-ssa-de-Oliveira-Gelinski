#include <stdio.h>
#include <stdlib.h>

//Escreva uma função que recebe como parâmetro um número inteiro e acrescenta 20 nesse número.

void incremento20(int *num){
    *num = *num + 20;
}

int main(){

    int num;

    scanf("%d", & num);

    incremento20(& num);

    return 0;
}
