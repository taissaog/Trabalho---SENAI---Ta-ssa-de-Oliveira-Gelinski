#include <stdio.h>
#include <stdlib.h>

//Escreva uma fun��o que recebe como par�metro um n�mero inteiro e acrescenta 20 nesse n�mero.

void incremento20(int *num){
    *num = *num + 20;
}

int main(){

    int num;

    scanf("%d", & num);

    incremento20(& num);

    return 0;
}
