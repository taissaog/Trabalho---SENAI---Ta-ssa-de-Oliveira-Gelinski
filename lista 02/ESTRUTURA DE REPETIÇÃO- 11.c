#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores. Exemplo:
os divisores do n�mero 66 s�o: 1, 2, 3, 6, 11, 22, 33 e 66*/

    int num;

    scanf("%d", & num);

    for(int i = num; i>0; i--){
        if(num % i == 0){
            printf("%d ", i);
        }

    }

    return 0;
}

