#include <stdio.h>
#include <stdlib.h>

    /*Escreva uma fun��o que receba por par�metro dois n�meros e retorne o maior
deles.*/

int main (){
    int num1=0, num2=0;

    printf("Digite um numero: ");
    scanf("%d", & num1);
    printf("Digite um numero: ");
    scanf("%d", & num2);

    if(num1 > num2){
        printf("O primeiro numero e o maior!");
    };
    if(num2 > num1){
        printf("O segundo numero e o maior!");
    };
    return 0;
 }
