#include<stdio.h>
#include<locale.h>

/*3. Faça um programa que leia um número inteiro N e depois imprima os N primeiros
números naturais ímpares.*/
int main(){

int n;
printf("Digite um numero: ");
scanf("%d", & n);
for (int i = 0, num = n + 1 + (n % 2); i < n; i++, num += 2) {
    printf("%d\n", num);
}
}
