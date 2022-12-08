#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Elabore uma função que receba como parâmetro um valor inteiro n e gere como
    saída n linhas com pontos de exclamação, conforme o exemplo a seguir, em que
    usamos n = 5:*/

    int num;

    printf("Digite um numero: \n");
    scanf("%d", & num);
    printf("\n");

    for(int a = num; a > 0; a--){
        for(int i = a; i > 0; i--){
            printf("!");
        }
        printf("\n");
    }

    return 0;
}
