#include <stdio.h>
#include <stdlib.h>

 /*Elabore uma fun��o que receba tr�s n�meros inteiros como par�metro,
 representando horas, minutos e segundos. A fun��o deve retornar esse hor�rio
convertido em segundos.*/

int funcao(int hora, int minutos, int segundos){
    return ((hora*60)*60) + (minutos * 60) + segundos;

}

void main(){

    int hora, minutos, segundos;

    printf("Insira quantas horas: \n");
    scanf("%d", &hora);
    printf("\nInsira quantas minutos: \n");
    scanf("%d", &minutos);
    printf("\nInsira quantas segundos: \n");
    scanf("%d\n", &segundos);
    printf("Segundos: %d", funcao(hora, minutos, segundos));
}
