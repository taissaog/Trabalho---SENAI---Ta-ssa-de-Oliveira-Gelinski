#include <stdio.h>
#include <stdlib.h>

/*10. Fa�a um programa para verificar se determinado n�mero inteiro lido � divis�vel por 3
ou 5, mas n�o simultaneamente pelos dois.*/

int main(){
    int num1=0;

    printf("Digite um numero (inteiro): ");
    scanf("%d", & num1);

    if(num1 % 3 == 0){
        printf("o numero e divisivel por tres!");
    }
    if(num1 % 5 == 0){
        printf("o numero e divisivel por cinco!");
    }
    else{
        printf("numero invalido!");

    }
}
