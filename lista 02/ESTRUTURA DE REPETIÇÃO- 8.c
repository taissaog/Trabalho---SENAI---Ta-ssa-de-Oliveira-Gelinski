#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Fa�a um programa que leia 10 inteiros e imprima sua m�dia.*/

    int a, r;

    for(int i = 0; i<10;i++){
        scanf("%d", &a);
        r = r+a;

        if(i == 10){
            printf("fim");
        }
    }
    printf("%d", r/10);

	return 0;
}
