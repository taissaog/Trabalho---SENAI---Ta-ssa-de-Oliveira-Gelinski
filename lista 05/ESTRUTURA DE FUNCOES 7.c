#include <stdio.h>
#include <stdlib.h>

/*Crie uma fun��o que recebe como par�metro um inteiro e iguala esse n�mero a zero
caso o n�mero seja negativo, caso o n�mero seja positivo a fun��o deve multiplicar
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
