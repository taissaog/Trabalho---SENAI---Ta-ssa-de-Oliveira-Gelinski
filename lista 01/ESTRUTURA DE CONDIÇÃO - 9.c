#include <stdio.h>
#include <stdlib.h>

/*9. Fa�a um programa que mostre ao usu�rio um menu com quatro op��es de
opera��es matem�ticas (as opera��es b�sicas, por exemplo). O usu�rio escolhe
uma das op��es, e o seu programa pede dois valores num�ricos e realiza a
opera��o, mostrando o resultado.*/

int main (){

    int primeiroValor, segundoValor;
    char operacaoMatematica;
    double valorFinal;

    printf("Digite o primeiro valor (inteiro): ");
    scanf("%d", & primeiroValor);
    printf("Digite o segundo valor (inteiro):");
    scanf("%d", & segundoValor);
    printf("Digite a operacao desejada escrevendo subtracao, soma, divisao ou multiplicacao ");
    scanf("%c", & operacaoMatematica);

    if(operacaoMatematica == "subtracao"){
        valorFinal = primeiroValor - segundoValor;
    }
    if(operacaoMatematica == "divisao"){
        valorFinal = primeiroValor / segundoValor;
    }
    if(operacaoMatematica == "soma"){
        valorFinal = primeiroValor + segundoValor;
    }
    if(operacaoMatematica == "multiplicacao"){
        valorFinal = primeiroValor * segundoValor;
    }

}
