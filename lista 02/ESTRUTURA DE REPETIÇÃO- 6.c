#include <stdio.h>
#include <stdlib.h>

/*6. Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e
terminando em 0. Mostre uma mensagem “FIM!” após a contagem.*/

int main(){

 int variavel_contador = 10;
 while(variavel_contador >= 0){

  printf("%d\n",variavel_contador);
  variavel_contador=variavel_contador-1;

 }
 printf("FIM");
}
