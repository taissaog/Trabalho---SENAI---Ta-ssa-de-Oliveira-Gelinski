#include <stdio.h>
#include <stdlib.h>


/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Fa�a um programa em que o
usu�rio entre com o valor e o estado de destino do produto e o programa retorne o
pre�o final do produto acrescido do imposto do estado em que ele ser� vendido. Se
o estado digitado n�o for v�lido, mostrar� uma mensagem de erro.*/
 int main(){

    char estado[2];
    double imposto;
    double valor;

    printf("Digite a sigla de um estado (MG, SP, RJ, MS): " );
    scanf("%d", & estado);

    printf("Digite o valor do produto: " );
    scanf("%f", & valor);

    if(estado == "MG" || estado == "mg" ){
        imposto =  valor * 0.07;
        printf("Imposto: %f", imposto );
    }
    if(estado == "SP" || estado == "sp" ){
        imposto =  valor * 0.12;
        printf("Imposto: %f", imposto );
    }
    if(estado == "RJ" || estado == "rj" ){
        imposto =  valor * 0.15;
        printf("Imposto: %f", imposto );
    }
    if(estado == "MS" || estado == "ms" ){
        imposto =  valor * 0.08;
        printf("Imposto: %f", imposto );
    }

 }
