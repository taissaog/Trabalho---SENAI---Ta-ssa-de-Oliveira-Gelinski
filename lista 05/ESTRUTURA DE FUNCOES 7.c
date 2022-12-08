#include <stdio.h>
#include <stdlib.h>

/*Crie uma função que recebe como parâmetro um inteiro e iguala esse número a zero
caso o número seja negativo, caso o número seja positivo a função deve multiplicar
o valor por 5.*/

void funcao(int *num){
    if(*num < 0){
        *num = 0;
    }
    else{
        *num = *num *5;
    }
}

int main(){

    int num;

    scanf("%d", &num);
    funcao(&num);

    return 0;

}
