/******************************************************************************

Faça um programa que receba a idade de 5 pessoas e imprima quantas pessoas
são maiores que 18 anos

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    int idade;
    int contador = 0;
    
    
    for(int i = 0; i < 5; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        
    if(idade >= 18) {
     contador++;
     }
    } 
    printf("O número de pessoas maiores que 18 anos é: %d\n", contador);
    
    return 0;
}


