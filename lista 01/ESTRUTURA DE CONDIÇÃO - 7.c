#include <stdio.h>
#include <stdlib.h>

/*7. Fa�a um programa que informe o m�s de acordo com o n�mero digitado pelo
usu�rio. Exemplo: Entrada = 4. Sa�da = Abril.*/

int main (){
    int mes;

    printf("Digite um mes de acordo com seu numero em ordem cronol�gica (comecando em janeiro = 1): ");
    scanf("%d", & mes);

    if(mes == 1){
        printf("Janeiro");
    }
    if(mes == 2){
        printf("Fevereiro");
    }
    if(mes == 3){
        printf("Marco");
    }
    if(mes == 4){
        printf("Abril");
    }
    if(mes == 5){
        printf("Maio");
    }
    if(mes == 6){
        printf("Junho");
    }
    if(mes == 7){
        printf("Julho");
    }
    if(mes == 8){
        printf("Agosto");
    }
    if(mes == 9){
        printf("Setembro");
    }
    if(mes == 10){
        printf("Outubro");
    }
    if(mes == 11){
        printf("Novembro");
    }
    if(mes == 12){
        printf("Dezembro");
    }
    else{
        printf("Mes invalido");
    }
}

